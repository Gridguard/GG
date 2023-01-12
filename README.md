# GridGuard-Arduino
Repository for Arduino Related Board Files

![MS88SF2_Connection](https://user-images.githubusercontent.com/5615745/166158934-ee59da17-a70f-4897-83b6-04f91b2ad024.JPG)

Hardware:
Connect the Minew According to the Schematics, If youse of Minew DEV Board, make sure P0.18 Switch is OFF.
Connect "SWDCLK", "SWDIO" and "GND" to the J-Link GND to the Minew Board
Connect the USB Cable Data+, Data-, GND. and VBUS
Burn Bootloader:

 A: GG_BLUE ( for Adafruit based nrf52 bluefruit libraries) :
 
 
  1. burn bootloader via "j-link" "j-flash lite" with this bootloader:
     https://github.com/electroc/GG/raw/main/GG_BLUE/GG_BLUE_BOOTLOADER_V1.0.2/GG_BLUE_BOOTLOADER_V1.0.2.hex
  
     or use the * .hex or * .bin file in this * .zip file:
     https://github.com/electroc/GG/raw/main/GG_BLUE/GG_BLUE_BOOTLOADER_V1.0.2.zip
  

  2. Add this link into your Arduino -> "Preferences" -> "Additional Board Manager URLs:"
     https://github.com/electroc/GG/raw/main/GG_BLUE/package_GG_BLUE_index.json

  3. Go to "Tools" -> "Board:" -> "Board Manager..."
  4. Type "GG" in text field -> Install GG_BLUE -> hit "Close"
  5. Go to "Tools" -> "Board:" -> "GG_BLUE" -> select "GG_BLUE"
  6. Upload Testcode
    


B: GG_BLE (for ArduinoBLE based nano 33 libraries )

  1. burn bootloader via "j-link" "j-flash lite" with this bootloader:
     https://github.com/electroc/GG/raw/main/GG_BLE/GG_BLE_BOOTLOADER_V1.0.2/GG_BLE_BOOTLOADER_V1.0.2.hex
  
     or use the * .hex or * .bin file in this * .zip file:
     https://github.com/electroc/GG/raw/main/GG_BLE/GG_BLE_BOOTLOADER_V1.0.2.zip
  

  2. Add this link into your Arduino -> "Preferences" -> "Additional Board Manager URLs:"
     https://github.com/electroc/GG/raw/main/GG_BLE/package_GG_BLE_index.json

  3. Go to "Tools" -> "Board:" -> "Board Manager..."
  4. Type "GG" in text field -> Install GG_BLE -> hit "Close"
  5. Go to "Tools" -> "Board:" -> "GG_BLE" -> select "GG_BLE"
  6. Upload Testcode




Connect

//for BLUE library:
#if defined(USE_TINYUSB)
#include <Adafruit_TinyUSB.h> // for Serial
#endif

