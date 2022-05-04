 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_PCA10056_
#define _VARIANT_PCA10056_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (20)
#define NUM_DIGITAL_PINS     (20)
#define NUM_ANALOG_INPUTS    (4)
#define NUM_ANALOG_OUTPUTS   (0)

// in (1) means the D1
// 1 means P0.1

// LEDs
#define PIN_LED1             (4)
#define PIN_LED2             (5)

#define LED_BUILTIN          (5)

#define LED_BLUE          	 (4)
#define LED_RED          	 (4)
#define LED_GREEN          	 (4)

#define LED_STATE_ON         1         // State when LED is litted

/*
 * Buttons
 */
#define PIN_BUTTON1          (18)
#define PIN_BUTTON2          (19)


/*
 * Analog pins
 */
#define PIN_A0               (14)
#define PIN_A1               (15)
#define PIN_A2               (16)
#define PIN_A3               (17)


static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;

#define ADC_RESOLUTION    14

// Other pins

/*
 * Serial interfaces
 */

// Arduino Header D0, D1
#define PIN_SERIAL1_RX      (0xff) // P1.01
#define PIN_SERIAL1_TX      (0xff) // P1.02

// Connected to Jlink CDC
#define PIN_SERIAL2_RX      (0xff)
#define PIN_SERIAL2_TX      (0xff)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (6)
#define PIN_SPI_MOSI         (7)
#define PIN_SPI_SCK          (8)

static const uint8_t SS   = 3 ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (1)
#define PIN_WIRE_SCL         (2)

// QSPI Pins
#define PIN_QSPI_SCK         0xff
#define PIN_QSPI_CS          0xff
#define PIN_QSPI_IO0         0xff
#define PIN_QSPI_IO1         0xff
#define PIN_QSPI_IO2         0xff
#define PIN_QSPI_IO3         0xff

// On-board QSPI Flash
#define EXTERNAL_FLASH_DEVICES   MX25R6435F
#define EXTERNAL_FLASH_USE_QSPI

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
