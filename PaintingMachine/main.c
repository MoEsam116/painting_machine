/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: essam
 */
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"

#include "MCAL/DIO/DIO_interface.h"
#include "MCAL/EXTI/EXTI_interface.h"
#include "MCAL/GIE/GIE_interface.h"

#include"HAL/DCMOTOR/DCMOTOR_interface.h"

#include "util/delay.h"

void motorisr1(void); // interrupt service routine 1
void motorisr2(void); //interrupt service routine 2

volatile u8 flag1=0; //flag1 is safety so that motors don't move beyond its designated track and destroy it
volatile u8 flag2=0; //flag2 is for the same purpose but for the opposite direction

void main()
{
	    /* Define INT0 INPUT & PULLUP*/
		DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN2,DIO_u8PIN_INPUT);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN2,DIO_u8PIN_HIGH);

		/*Define INT1 PIN AS INPUT & PULLUP*/
		DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN3,DIO_u8PIN_INPUT);
		DIO_u8SetPinValue(DIO_u8PORTD,DIO_u8PIN3,DIO_u8PIN_HIGH);

		//initialization of vertical and horizontal motors
		void DCMOTOR_voidVerDCMOTORInit();
		void DCMOTOR_voidHorDCMOTORInit();

		//initialization of GIE INT0 and INT1
		GIE_voidGIEEnable();
		EXTI_voidInt0Init();
		EXTI_voidInt1Init();

		//set callback function
		EXTI_u8INT0SetCallBack(&motorisr1);
		EXTI_u8INT1SetCallBack(&motorisr2);

	while(1)
	{
		/*horizontal motor moves to the right for 10s*/
		DCMOTOR_voidHorDCMOTORRotateCW();
		_delay_ms(10000);
		/*vertical motor moves up for 5s*/
		DCMOTOR_voidVerDCMOTORRotateCW();
		_delay_ms(5000);
		/*horizontal motor moves to the left for 10s*/
		DCMOTOR_voidHorDCMOTORRotateCCW();
		_delay_ms(10000);
		/*checks the flags to insure that the motors does not break the track*/
		if(flag1==1)
		{
			/*motors stop and return to the origin points*/
			void DCMOTOR_voidHorMOTORStop();
			void DCMOTOR_voidVerMOTORStop();
			_delay_ms(1000);
			DCMOTOR_voidHorDCMOTORRotateCCW();
			_delay_ms(10000);
			DCMOTOR_voidVerDCMOTORRotateCCW();
			_delay_ms(5000);
			break;

		}
		if(flag2==1)
		{
			/*if flag2 is triggered that means that vertical motor need to return to origin point*/
			void DCMOTOR_voidVerMOTORStop();
			_delay_ms(1000);
			DCMOTOR_voidVerDCMOTORRotateCCW();
			_delay_ms(5000);
			break;
		}
	}
}

void motorisr1(void)
{
	flag1=1;
}
void motorisr2(void)
{
	flag2=1;
}
