#include <Dio.h>
#include "Port_Types.h"
#include "stdint.h"
#include "Std_Macros.h"

Dio_LevelType Dio_ReadChannel(Dio_PortType Port_ID, Dio_ChannelType ChannelId)
{
	uint8_t val;
		switch (Port_ID)
		{
			case PORTA:
			{				
			// read bit "ChannelID of port A 
			val= READ_BIT(GPIOA_DATA_R_APB, ChannelId);
			break; 
			}
			case PORTB:
			{				
			// read bit "ChannelID of port A 
			val= READ_BIT(GPIOA_DATA_R_APB, ChannelId);
			break; 
			}
			case PORTC:
			{				
			// read bit "ChannelID of port A 
			val= READ_BIT(GPIOA_DATA_R_APB, ChannelId);
			break; 
			}
			case PORTD:
			{				
			// read bit "ChannelID of port A 
			val= READ_BIT(GPIOD_DATA_R_APB, ChannelId);
			break; 
			}
			case PORTE:
			{				
			// read bit "ChannelID of port A 
			val= READ_BIT(GPIOE_DATA_R_APB, ChannelId);
			break; 
			}
			case PORTF:
			{				
			// read bit "ChannelID of port A 
			val= READ_BIT(GPIOF_DATA_R_APB, ChannelId);
			break; 
			}
		}
    return val;

}


void Dio_WriteChannel(Dio_PortType Port_ID , Dio_ChannelType ChannelId, Dio_LevelType Level)
{
// for now work with port F
        //  Port_ConfigType* ConfigPtr;
     // uint8_t Port_ID = ConfigPtr->PortID;
    switch(Port_ID)
    {
       // port A
       case PortA:
       {   if(Level)
           GPIOA_DATA_R_APB |=(1<< ChannelId);
           else GPIOA_DATA_R_APB &=~(1<< ChannelId);
       break;
       }

       // port B
       case PortB:
       {   if(Level)
           GPIOB_DATA_R_APB |=(1<< ChannelId);
           else GPIOB_DATA_R_APB &=~(1<< ChannelId);
       break;
       }
       // port C
       case PortC:
       {   if(Level)
           GPIOC_DATA_R_APB |=(1<< ChannelId);
           else GPIOC_DATA_R_APB &=~(1<< ChannelId);
       break;
       }


       // port D
       case PortD:
       {   if(Level)
           GPIOD_DATA_R_APB |=(1<< ChannelId);
           else GPIOD_DATA_R_APB &=~(1<< ChannelId);
       break;
       }

       // port E
       case PortE:
       {   if(Level)
           GPIOE_DATA_R_APB |=(1<< ChannelId);
           else GPIOE_DATA_R_APB &=~(1<< ChannelId);
       break;
       }

       // port F
       case PortF:
       { 
				 // enable clk for port F 
					
				 if(Level)
               GPIOF_DATA_R_APB |=(1<< ChannelId);
               else GPIOF_DATA_R_APB &=~(1<< ChannelId);
           break;
       }
   }

}

uint8_t DioReadPort(Dio_PortType PortId )
{
    return 0;

}

void Dio_WritePort (Dio_PortType PortId, Dio_PortLevelType Level)
{

}
void Dio_FlipChannel (Dio_ChannelType ChannelId)
{

}
