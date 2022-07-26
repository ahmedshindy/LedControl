#ifndef _PORT_TYPES_H
#define _PORT_TYPES_H


// you can use Dio.h channel types instead
typedef enum {
 Ch_0 =0,
 Ch_1=1,
 Ch_2=2,
 Ch_3=3,
 Ch_4,
 Ch_5,
 Ch_6,
 Ch_7,
}Port_PinType;


typedef enum
{
    Input,
    Output,
}port_PinDirectionType;           // in or out


typedef enum
{
DIO,
UART_Tx,
UART_Rx,
ADC,
EXTI,
}Port_PinModeType;          // more types could be added when needed


typedef enum
{
  Floating,
  PullUp,
  PullDown,
  OpenDrain,
}Port_PinInternalAttachType;      // leave it as default for 1st project

typedef enum
{
    Default,    // 2mA
    Drive_4mA,
    Drive_8mA,
}Port_PinOutputCurrentType;


// we need to have ports enum
typedef enum
{
    PortA=0,
    PortB,
    PortC,
    PortD,
    PortE,
    PortF=6,
    }Port_Type;

// things can be added when needed, for example working with Interrupts
typedef struct
{
    Port_Type                   PortID;
    Port_PinType                PinNumber;
    Port_PinModeType            ModeValue;
    Port_PinInternalAttachType  IntAttach;
    Port_PinOutputCurrentType   Current;
    port_PinDirectionType       Direction;
 }Port_ConfigType;




#endif  _PORT_TYPES_H
