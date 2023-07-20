/*
 * DCMOTOR_config.h
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
#ifndef DCMOTOR_CONFIG_H_
#define DCMOTOR_CONFIG_H_

//vertical motor configuration
#define DCMOTORVER_PORT         DIO_u8PORTA
#define DCMOTORVER_CW_PIN       DIO_u8PIN0
#define DCMOTORVER_CCW_PIN      DIO_u8PIN1

//horizontal motor configuration
#define DCMOTORHOR_PORT         DIO_u8PORTA
#define DCMOTORHOR_CW_PIN       DIO_u8PIN2
#define DCMOTORHOR_CCW_PIN      DIO_u8PIN3

#endif /* DCMOTOR_CONFIG_H_ */
