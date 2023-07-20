/*
 * DCMOTOR_interface.h
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
#ifndef DCMOTOR_INTERFACE_H_
#define DCMOTOR_INTERFACE_H_

void DCMOTOR_voidVerDCMOTORInit();
void DCMOTOR_voidVerDCMOTORRotateCW();
void DCMOTOR_voidVerDCMOTORRotateCCW();
void DCMOTOR_voidVerMOTORStop();

void DCMOTOR_voidHorDCMOTORInit();
void DCMOTOR_voidHorDCMOTORRotateCW();
void DCMOTOR_voidHorDCMOTORRotateCCW();
void DCMOTOR_voidHorMOTORStop();

#endif /* DCMOTOR_INTERFACE_H_ */
