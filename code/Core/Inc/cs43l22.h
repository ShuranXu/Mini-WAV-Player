/*
 * cs43l22.h
 *
 * @description: The header file of the library implementation of
 * the CS43L22 Audio DAC using STM HAL libraries.
 *
 * @reference:
 * 1.Cirrus Logic CS43L22 datasheet:
 * https://www.mouser.com/ds/2/76/CS43L22_F2-1142121.pdf
 * 2.ST open-source CS43L22 Audio Codec DSP drivers
 * 3.https://github.com/MYaqoobEmbedded/STM32-Tutorials/tree/master/Tutorial%2043%20-%20WAV%20Player
 *
 * @Code Leverage: The device initialization routine is implemented based on the
 * initialization function from the tutorial. The remaining functions are implemented
 * according to the data sheet as they are quite straightforward to implement by
 * simply following the data sheet.
 *
 * @Author: Shuran Xu & Ritika Ramchandani
 *
 * @Revision: 2.0
 *
 * @Date 2022-12-12
 */

#ifndef __CS43L22_H___
#define __CS43L22_H___
#include "stm32f4xx_hal.h"


/***************************************
* Public function declaration
****************************************/
void CS43_init(I2C_HandleTypeDef i2c_handle);
void CS43_set_volume(uint8_t volume);
void CS43_start(void);
void CS43_stop(void);

#endif // __CS43L22_H___
