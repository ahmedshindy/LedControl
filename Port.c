#include "Port.h"
#include "Dio.h"


void Port_Init(Port_ConfigType *ConfigPtr)
{
    uint8_t Port_ID = ConfigPtr->PortID;



   switch(Port_ID)
   {
   // port A
   case PortA:
       {




           break;
       }

   // port B
   case PortB:  {        break; }
   // port C
   case PortC:  {        break; }


   // port D
   case PortD:  {        break; }

   // port E
   case PortE:          break;

   // port F
   case PortF:
	 {
		 if(ConfigPtr->ModeValue == DIO)
		 {

			 RCGCGPIO|=(0x20); //ob0010 0000 to enable clk for port F
      GPIOLOCK_PORTF_R =0x4C4F434B;              // unlock port F
			 GPIODEN_PORTF_APB |=(1<<ConfigPtr->PinNumber);   // 0111 1111  	// enable digital enable feature
       GPIOCR_PORTF_APB |=(1<<ConfigPtr->PinNumber);
       if( (ConfigPtr->Direction)  == 1)
           // configure as Output
       GPIOF_DIR_R_APB |=( 1<<(ConfigPtr->PinNumber));

       else if( (ConfigPtr->Direction)  == 0)
       {
           // by default the pin is input, configure it and congigure internal attach type also
           GPIOF_DIR_R_APB &=~( 1<<(ConfigPtr->PinNumber));
           if(ConfigPtr->IntAttach == Floating) {}
           else if(ConfigPtr->IntAttach == PullUp) {}
           else if (ConfigPtr->IntAttach == PullDown) {}
           else if (ConfigPtr->IntAttach == OpenDrain) {}
       }

       break;
		 }
	 }

   }

}
