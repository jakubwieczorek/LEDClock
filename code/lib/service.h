
#ifndef SERVICE_H
#define SERVICE_H

#include "stm32f1xx_hal.h"

// leds
enum {U7 = 2};

// program states
typedef enum STATE {SET_LED, NOTHING, SET_HIGH_BIT, SET_LOW_BIT} state_t;

// model
enum {U9};

typedef struct LED
{
	GPIO_TypeDef* GPIOx;
	uint16_t pin;
} led_t;

typedef struct LED_LATCH
{
	GPIO_TypeDef* GPIOx;
	uint16_t pin;
	
	led_t leds[1];
} led_latch_t;

// service functions
//void start_picture_timer();

#endif