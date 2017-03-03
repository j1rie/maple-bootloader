/* *****************************************************************************
 * The MIT License
 *
 * Copyright (c) 2010 LeafLabs LLC.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * ****************************************************************************/

/**
 *  @file config.h
 *
 *  @brief bootloader settings and macro defines
 *
 *
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#ifdef Maple

# define LED_BANK GPIOA
# define LED_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOA
# define LED      5

# define NoButton
# define UCF5k
//# define BUTTON_BANK GPIOC
//# define BUTTON_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOC
//# define BUTTON      9

# define USB_DISC_BANK GPIOC
# define USB_DISC_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOC
# define USB_DISC      12

#elif defined MapleMini

# define LED_BANK GPIOB
# define LED_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOB
# define LED      1

# define NoButton
# define UCF5k
//# define BUTTON_BANK GPIOB
//# define BUTTON_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOB
//# define BUTTON      8

# define USB_DISC_BANK GPIOB
# define USB_DISC_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOB
# define USB_DISC      9

#elif defined Blue

# define LED_BANK GPIOA
# define LED_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOA
# define LED      9
//# define REMAP
# define NO_USB_DISC
# define NoButton
//# define USB_DISC_BANK GPIOB
//# define USB_DISC_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOB
//# define USB_DISC      13

#elif defined Dev

# define LED_BANK GPIOB
# define LED_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOB
# define LED      13
# define NO_USB_DISC
# define NoButton
//# define USB_DISC_BANK GPIOB
//# define USB_DISC_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOB
//# define USB_DISC      15

#elif defined Red

# define LED_BANK GPIOA
# define LED_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOA
# define LED      9
//# define REMAP
# define NO_USB_DISC
# define NoButton
//# define USB_DISC_BANK GPIOA
//# define USB_DISC_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOA
//# define USB_DISC      13

#elif defined blueDev

# define LED_BANK GPIOC
# define LED_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOC
# define LED      13
# define NO_USB_DISC
# define NoButton

#elif defined blackDev

# define LED_BANK GPIOB
# define LED_RCC_APB2ENR_GPIO RCC_APB2ENR_GPIOB
# define LED      12
# define NO_USB_DISC
# define NoButton

#else
# error "Unknown platform"
#endif

#define BLINK_FAST 0x50000
#define BLINK_SLOW 0x100000

#define STARTUP_BLINKS 5
#define BOOTLOADER_WAIT 6

#define USER_CODE_RAM     ((u32)0x20000C00)
#define RAM_END           ((u32)0x20005000)
#ifndef UCF5k
#define USER_CODE_FLASH   ((u32)0x08002000)
#else
#define USER_CODE_FLASH   ((u32)0x08005000)
#endif
#define FLASH_END         ((u32)0x08020000)

#define VEND_ID0 0xAF
#define VEND_ID1 0x1E
#define PROD_ID0 0x03
#define PROD_ID1 0x00

#endif
