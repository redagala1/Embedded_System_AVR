/***********************************************************************************************************/
/***********************************************************************************************************/
/*********************         Author : reda galal anwer         *******************************************/
/*********************			 Layer : HAL                     *******************************************/
/*********************			 SWC : sensors 					  ******************************************/
/***************************** Version : 1.2 ***************************************************************/
/***********************************************************************************************************/
/***********************************************************************************************************/

#ifndef Sensors_H_
#define Sensors_H_

#include "STD_TYPES.h"
#include "ADC_config.h"


u16 VoltRead_InMilli_10Bits(ADC_Channel channel);

u16 TEMP_Read_10Bits(ADC_Channel channel);



#endif