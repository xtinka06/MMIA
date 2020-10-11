/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "stm32f0xx.h"

int main(void)
{
		RCC->AHBENR |= RCC_AHBENR_GPIOAEN;				//Enable the peripheral clock of GPIOA
		GPIOA->MODER|=GPIO_MODER_MODER5_0;				//Select output mode (01) on GPIOA pin 2

    /* Loop forever */
	for(;;)
	{
		GPIOA->ODR ^= (1<<5); // toggle
		for (volatile uint32_t i = 0; i < 100000; i++) {}

	}
}
