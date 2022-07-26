#include "stdint.h"
#include "tm4c123gh6pm.h"		// file licenced by Texas Instruments
#include "stdint.h"
#include "Port.h"
#include "Dio.h"
/**
 * author ahmed shindy
 * email: ahmedshindy70@gmail.com
 * main.c
 */



void SystemInit() {}  // in Keil 4 , you must do this step specifend in the .s startup code 
int main(void)
{
    Port_ConfigType *Conf_Ptr;
    Conf_Ptr->PortID = PortF;
    Conf_Ptr->PinNumber = 7;
    Conf_Ptr->ModeValue =DIO;
    Conf_Ptr->Current =Default;
    Conf_Ptr->Direction = Output;

    Port_Init(Conf_Ptr);
	    Dio_WriteChannel((uint8_t)Conf_Ptr->PortID, 7, 1);

	while(1)
	{

	}
	return 0;
}


