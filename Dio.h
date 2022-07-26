#ifndef   _DIO_H
#define   _DIO_H

#include "stdint.h"




/***************************************** gpio registers ********/

/*
 * DATA REGISTER
 */

#define GPIODATA_OFFSET             0x000        // ignore addition
#define GPIOA_DATA_R_APB          (*((volatile uint32_t *)0x40004000))
#define GPIOA_DATA_R_AHB          (*((volatile uint32_t *)0x40058000))

#define GPIOB_DATA_R_APB          (*((volatile uint32_t *)0x40005000))
#define GPIOB_DATA_R_AHB          (*((volatile uint32_t *)0x40059000))

#define GPIOC_DATA_R_APB          (*((volatile uint32_t *)0x40006000))
#define GPIOC_DATA_R_AHB          (*((volatile uint32_t *)0x4005A000))

#define GPIOD_DATA_R_APB          (*((volatile uint32_t *)0x40007000))
#define GPIOD_DATA_R_AHB          (*((volatile uint32_t *)0x4005B000))

#define GPIOE_DATA_R_APB          (*((volatile uint32_t *)0x40024000))
#define GPIOE_DATA_R_AHB          (*((volatile uint32_t *)0x4005C000))

#define GPIOF_DATA_R_APB          (*((volatile uint32_t *)0x40025000))
#define GPIOF_DATA_R_AHB          (*((volatile uint32_t *)0x4005D000))



/*
 *  DIRECTION REGISTER
 */
#define GPIO_DIR_OFFSET             0x400

#define GPIOA_DIR_R_APB          (*((volatile uint32_t *)(0x40004000+GPIO_DIR_OFFSET )))
#define GPIOA_DIR_R_AHB          (*((volatile uint32_t *)(0x40058000+GPIO_DIR_OFFSET )))


#define GPIOB_DIR_R_APB          (*((volatile uint32_t *)(0x40005000+GPIO_DIR_OFFSET )))
#define GPIOB_DIR_R_AHB          (*((volatile uint32_t *)(0x40059000+GPIO_DIR_OFFSET )))

#define GPIOC_DIR_R_APB          (*((volatile uint32_t *)(0x40006000+GPIO_DIR_OFFSET )))
#define GPIOC_DIR_R_AHB          (*((volatile uint32_t *)(0x4005A000+GPIO_DIR_OFFSET )))

#define GPIOD_DIR_R_APB          (*((volatile uint32_t *)(0x40007000+GPIO_DIR_OFFSET )))
#define GPIOD_DIR_R_AHB          (*((volatile uint32_t *)(0x4005B000+GPIO_DIR_OFFSET )))

#define GPIOE_DIR_R_APB          (*((volatile uint32_t *)(0x40024000+GPIO_DIR_OFFSET )))
#define GPIOE_DIR_R_AHB          (*((volatile uint32_t *)(0x4005C000+GPIO_DIR_OFFSET )))

#define GPIOF_DIR_R_APB          (*((volatile uint32_t *)(0x40025000+GPIO_DIR_OFFSET )))
#define GPIOF_DIR_R_AHB          (*((volatile uint32_t *)(0x4005D000+GPIO_DIR_OFFSET )))


/****************RCGCGPIO***************/
#define RCGCGPIO_OFFSET 	 0x608
#define RCGCGPIO       		   (*((volatile uint32_t *)( 0x400FE000+ RCGCGPIO_OFFSET )))



/***** GPIO Digital Enable (GPIODEN)  ******/
#define GPIODEN_OFFSET 			0x51C
#define GPIODEN_PORTF_APB		(*((volatile uint32_t *)(  0x40025000+ GPIODEN_OFFSET )))


/*****************GPIOLOCK********************/
#define GPIOLOCK_OFFSET       0x520
#define GPIOLOCK_PORTF_R      (*((volatile uint32_t *)(   0x40025000+ GPIOLOCK_OFFSET )))

/****** GPIOCR : Commit REGISTER *************************/
#define GPIOCR_OFFSET      0x524
#define GPIOCR_PORTF_APB   (*((volatile uint32_t *)(   0x40025000+ GPIOCR_OFFSET )))

// Channel Type could be Port A->F on Tiva C
typedef enum{
    PORTA =0, // zero by default
    PORTB,
    PORTC,
    PORTD,
		PORTE,
    PORTF,
}Dio_PortType;



typedef enum {
 Ch0 =0,
 Ch1,
 Ch2,
 Ch3,
 Ch4,
 Ch5,
 Ch6,
 Ch7,
}Dio_ChannelType;


typedef enum
{
LOW,
HIGH,
}Dio_LevelType;


#define Dio_PortLevelType   uint8_t

/*************** functions ************/
void Dio_WriteChannel(Dio_PortType Port_ID , Dio_ChannelType ChannelId, Dio_LevelType Level);


#endif   _DIO_H
