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

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

/*
const uint32_t g_ADigitalPinMap[] =
{
  // P0
  0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 ,
  8 , 9 , 10, 11, 12, 13, 14, 15,
  16, 17, 18, 19, 20, 21, 22, 23,
  24, 25, 26, 27, 28, 29, 30, 31,

  // P1
  32, 33, 34, 35, 36, 37, 38, 39,
  40, 41, 42, 43, 44, 45, 46, 47
};
*/

const uint32_t g_ADigitalPinMap[] =
{
  // P0 = 0 - 31 , P1 = 32 - 47
  32, 	// P1.00 - D0 - QSPI
  41, 	// P1.09 - D1 - SDA
  6,	// P0.06 - D2 - SCL
  8,	// P0.08 - D3 - LED1
  9,	// P0.09 - D4 - LowSpeed
  10,	// P0.10 - D5 - LowSpeed  - SS
  12,	// P0.12 - D6 - BUTTON K1 - MISO
  13,	// P0.13 - D7			  - MOSI
  15,	// P0.15 - D8 - BUTTON K2 - SCK
  18,	// P0.18 - D9 - RESET
  20,	// P0.20 - D10
  22,	// P0.22 - D11 - LED2 - QSPI
  24,	// P0.24 - D12 - LED4 - 
  26,	// P0.26 - D13 - LED3 - 
  2,	// P0.02 - D14 - LowSpeed - A0
  4,	// P0.04 - D15 - 		  -	A1 
  29,	// P0.29 - D16 - LowSpeed - A2
  31,	// P0.31 - D17 - LowSpeed - A3
  45,	// P1.13 - D18 - LowSpeed
  47	// P1.15 - D19 - LowSpeed
  
};



void initVariant()
{
  // init all 4 onboard LEDs
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);

  pinMode(PIN_LED2, OUTPUT);
  ledOff(PIN_LED2);

  pinMode(PIN_LED3, OUTPUT);
  ledOff(PIN_LED3);

  pinMode(PIN_LED4, OUTPUT);
  ledOff(PIN_LED4);
}

