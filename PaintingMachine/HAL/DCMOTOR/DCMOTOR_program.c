/*
 * DCMOTOR_program.c
 *
 *  Created on: May 13, 2023
 *      Author: essam
 */
/********************************/
/********************************/
/*      Author:Mohamed Esam     */
/*      Layer:HAL               */
/*      SWC:DCMOTOR             */
/*      Version:1.00            */
/********************************/
/********************************/

#include"BIT_MATH.h"
#include"STD_TYPES.h"
#include"DCMOTOR_config.h"
#include"DCMOTOR_interface.h"
#include"../../MCAL/DIO/DIO_interface.h"

void DCMOTOR_voidVerDCMOTORInit()
{
	/*setting motor pins as output*/
	DIO_u8SetPinDirection(DCMOTORVER_PORT,DCMOTORVER_CW_PIN,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(DCMOTORVER_PORT,DCMOTORVER_CCW_PIN,DIO_u8PIN_OUTPUT);
}

void DCMOTOR_voidVerDCMOTORRotateCW()
{
	/*setting CW pin as high and setting CCW pin as low*/
	DIO_u8SetPinValue(DCMOTORVER_PORT,DCMOTORVER_CW_PIN,DIO_u8PIN_HIGH);
	DIO_u8SetPinValue(DCMOTORVER_PORT,DCMOTORVER_CCW_PIN,DIO_u8PIN_LOW);
}

void DCMOTOR_voidVerDCMOTORRotateCCW()
{
	/*setting CCW pin as high and setting CW pin as low*/
	DIO_u8SetPinValue(DCMOTORVER_PORT,DCMOTORVER_CW_PIN,DIO_u8PIN_LOW);
	DIO_u8SetPinValue(DCMOTORVER_PORT,DCMOTORVER_CCW_PIN,DIO_u8PIN_HIGH);
}

void DCMOTOR_voidVerMOTORStop()
{
	/*motor stops moving*/
	DIO_u8SetPinValue(DCMOTORVER_PORT,DCMOTORVER_CW_PIN,DIO_u8PIN_LOW);
	DIO_u8SetPinValue(DCMOTORVER_PORT,DCMOTORVER_CCW_PIN,DIO_u8PIN_LOW);
}

void DCMOTOR_voidHorDCMOTORInit()
{
	/*setting motor pins as output*/
	DIO_u8SetPinDirection(DCMOTORHOR_PORT,DCMOTORHOR_CW_PIN,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(DCMOTORHOR_PORT,DCMOTORHOR_CCW_PIN,DIO_u8PIN_OUTPUT);
}

void DCMOTOR_voidHorDCMOTORRotateCW()
{
	/*setting CW pin as high and setting CCW pin as low*/
	DIO_u8SetPinValue(DCMOTORHOR_PORT,DCMOTORHOR_CW_PIN,DIO_u8PIN_HIGH);
	DIO_u8SetPinValue(DCMOTORHOR_PORT,DCMOTORHOR_CCW_PIN,DIO_u8PIN_LOW);
}

void DCMOTOR_voidHorDCMOTORRotateCCW()
{
	/*setting CCW pin as high and setting CW pin as low*/
	DIO_u8SetPinValue(DCMOTORHOR_PORT,DCMOTORHOR_CW_PIN,DIO_u8PIN_LOW);
	DIO_u8SetPinValue(DCMOTORHOR_PORT,DCMOTORHOR_CCW_PIN,DIO_u8PIN_HIGH);
}

void DCMOTOR_voidHorMOTORStop()
{
	/*motor stops moving*/
	DIO_u8SetPinValue(DCMOTORHOR_PORT,DCMOTORHOR_CW_PIN,DIO_u8PIN_LOW);
	DIO_u8SetPinValue(DCMOTORHOR_PORT,DCMOTORHOR_CCW_PIN,DIO_u8PIN_LOW);
}

