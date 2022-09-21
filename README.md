# Deneyap UV Light Sensor Arduino Library
[FOR TURKISH VERSION](docs/README_tr.md) ![trflag](https://github.com/deneyapkart/deneyapkart-arduino-core/blob/master/docs/tr.png)

***** Add photo ****

Arduino library for Deneyap UV Light Sensor LTR390

## Specifications 
- `Product ID` **M41** ,**mpv1.0**
- `MCU` LITE-ON LTR-390UV-01
- `Weight` 
- `Module Dimension` 25,4 mm x 25,4 mm
- `I2C address` 0x53

| Address |  | 
| :---    | :---     |
| 0x53 | default address |

## :closed_book:Documentation
[Deneyap UV Light Sensor](https://docs.deneyapkart.org/en/content/contentDetail/deneyap-module-deneyap-uv-light-and-ambient-light-)

[Deneyap UV Light Sensor Shematic](https://cdn.deneyapkart.org/media/upload/userFormUpload/rpg5nuYZ4nRmF6koyt8opWJk0g1mW6tX.pdf)

[Deneyap UV Light Sensor Mechanical Drawing](https://cdn.deneyapkart.org/media/upload/userFormUpload/ts4p78WD1a4OfMgkSmOPG9Jm2hrBhzXY.pdf)

[LITE-ON LTR-390UV-01_datasheet](https://optoelectronics.liteon.com/upload/download/DS86-2015-0004/LTR-390UV_Final_%20DS_V1%201.pdf)

[How to install a Arduino Library](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap UV Light Sensor
This Arduino library allows you to use Deneyap UV Light Sensor LTR390 with I2C peripheral. You can use this library in your projects with any Arduino compatible board with I2C peripheral.

## :globe_with_meridians:Repository Contents
- `/docs ` README_tr.md and product photos
- `/examples ` Examples with .ino extension sketches
- `/src ` Source files (.cpp .h)
- `keywords.txt ` Keywords from this library that will be highlighted in the Arduino IDE
- `library.properties ` General library properties for the Arduino package manager

## Version History
1.0.1 - update library function (`begin`),add new sketch(`IsikAlgilamaOkumaAyarlama`), update texts info

1.0.0 - initial release

## :rocket:Hardware Connections
- Deneyap UV Light Sensor and Board can be connected with I2C cable
- or 3V3, GND, SDA and SCL pins can be connected with jumper cables

|UV Light Sensor| Function | Board pins | 
|:--- |   :---  | :---|
|3.3V | Power   |3.3V |      
|GND  | Ground  | GND | 
|SDA  | I2C Data  | SDA pin |
|SCL  | I2C Clock | SCL pin |
|INT | Interrupt|  | 

## License Information
Please review the [LICENSE](https://github.com/deneyapkart/deneyap-ultraviyole-isik-algilayici-arduino-library/blob/master/LICENSE) file for license information.

This code is partly based on the  Adafruit LTR390 Arduino Library. Changed to work with  Deneyap UV Light Sensor LTR390 library.
Following their requirements, here is the Adafruit README file:

Adafruit_LTR390 Build Status/Documentation
This is the Adafruit LTR390 UV sensor library

Tested and works great with the Adafruit LTR390 Breakout Board



This chip uses I2C to communicate, 2 pins are required to interface

Adafruit invests time and resources providing this open source code, please support Adafruit and open-source hardware by purchasing products from Adafruit!

Installation
To install, use the Arduino Library Manager and search for "Adafruit LTR390" and install the library.

Dependencies
Adafruit_BusIO
Contributing
Contributions are welcome! Please read our Code of Conduct before contributing to help this project stay welcoming.

Documentation and doxygen
Documentation is produced by doxygen. Contributions should include documentation for any new code added.

Some examples of how to use doxygen can be found in these guide pages:

https://learn.adafruit.com/the-well-automated-arduino-library/doxygen

https://learn.adafruit.com/the-well-automated-arduino-library/doxygen-tips

Formatting and clang-format
This library uses clang-format to standardize the formatting of .cpp and .h files. Contributions should be formatted using clang-format:

The -i flag will make the changes to the file.

clang-format -i *.cpp *.h
If you prefer to make the changes yourself, running clang-format without the -i flag will print out a formatted version of the file. You can save this to a file and diff it against the original to see the changes.

Note that the formatting output by clang-format is what the automated formatting checker will expect. Any diffs from this formatting will result in a failed build until they are addressed. Using the -i flag is highly recommended.

clang-format resources
Binary builds and source available on the LLVM downloads page
Documentation and IDE integration
About this Driver
Written by Limor Fried for Adafruit Industries.
BSD license, check license.txt for more information All text above must be included in any redistribution