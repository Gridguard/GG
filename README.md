# GridGuard-Arduino
Repository for Arduino Related Board Files

Hardware:
Connect the Minew According to the Schematics, If youse of Minew DEV Board, make sure P0.18 Switch is OFF.
Connect "SWDCLK", "SWDIO" and "GND" to the J-Link GND to the Minew Board
Connect the USB Cable Data+, Data-, GND. and VBUS
Burn Bootloader:

 A: GG_BLUE ( for Adafruit based nrf52 bluefruit libraries) :
 
 
  1. burn bootloader via "j-link" "j-flash lite" with this bootloader:
  
  or use the * .hex or * .bin file in this * .zip file:
  

  2. Add this link into your Arduino -> "Preferences" -> "Additional Board Manager URLs:"
  https://raw.githubusercontent.com/Gridguard/GridGuard-Arduino/main/based_on_adafruit_nrf52/package_gridguard_nrf52_index.json

  3. In Arduino. Go to "Tools" -> "Board" -> 




B: GG_BLE (for ArduinoBLE based nano 33 libraries )

1. for arduino ble based library:
    burn bootloader via j-link with this bootloader:
    https://github.com/Gridguard/GridGuard-Arduino/blob/main/based_on_BLE_nano_33/bootloader.hex

2. Add this link into your Arduino -> "Preferences" -> "Additional Board Manager URLs:"
3. https://github.com/Gridguard/GridGuard-Arduino/raw/main/GG_BLE/package_gridguard_ble_index.json
  https://raw.githubusercontent.com/Gridguard/GridGuard-Arduino/main/based_on_BLE_nano_33/package_gridguard_ble_index.json


![MS88SF2_Connection](https://user-images.githubusercontent.com/5615745/166158934-ee59da17-a70f-4897-83b6-04f91b2ad024.JPG)



Connect


How to release a new version:
edit * index.json file
new link url
make sha-256 checksum
check size in explorer
edit pl,atform.txt version
