























.build/mega2560/EEPROM/EEPROM.o : /usr/share/arduino/libraries/EEPROM/EEPROM.cpp
	@echo [93mEEPROM/EEPROM.cpp[0m
	@mkdir -p .build/mega2560/EEPROM
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/EEPROM/EEPROM.cpp
include .build/mega2560/EEPROM/EEPROM.d



.build/mega2560/EEPROM/libEEPROM.a : .build/mega2560/EEPROM/EEPROM.o
	@echo [92mLinking libEEPROM.a[0m
	@/usr/bin/avr-ar rcs $@ $^












.build/mega2560/SPI/SPI.o : /usr/share/arduino/libraries/SPI/SPI.cpp
	@echo [93mSPI/SPI.cpp[0m
	@mkdir -p .build/mega2560/SPI
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/SPI/SPI.cpp
include .build/mega2560/SPI/SPI.d



.build/mega2560/SPI/libSPI.a : .build/mega2560/SPI/SPI.o
	@echo [92mLinking libSPI.a[0m
	@/usr/bin/avr-ar rcs $@ $^







.build/mega2560/Wire/utility/twi.o : /usr/share/arduino/libraries/Wire/utility/twi.c
	@echo [93mWire/utility/twi.c[0m
	@mkdir -p .build/mega2560/Wire/utility
	@/usr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/libraries/Wire/utility/twi.c
include .build/mega2560/Wire/utility/twi.d






.build/mega2560/Wire/Wire.o : /usr/share/arduino/libraries/Wire/Wire.cpp
	@echo [93mWire/Wire.cpp[0m
	@mkdir -p .build/mega2560/Wire
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/libraries/Wire/Wire.cpp
include .build/mega2560/Wire/Wire.d



.build/mega2560/Wire/libWire.a : .build/mega2560/Wire/utility/twi.o .build/mega2560/Wire/Wire.o
	@echo [92mLinking libWire.a[0m
	@/usr/bin/avr-ar rcs $@ $^







.build/mega2560/arduino/wiring.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
	@echo [93marduino/wiring.c[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
include .build/mega2560/arduino/wiring.d

.build/mega2560/arduino/WInterrupts.o : /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
	@echo [93marduino/WInterrupts.c[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
include .build/mega2560/arduino/WInterrupts.d

.build/mega2560/arduino/wiring_analog.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
	@echo [93marduino/wiring_analog.c[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
include .build/mega2560/arduino/wiring_analog.d

.build/mega2560/arduino/wiring_digital.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
	@echo [93marduino/wiring_digital.c[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
include .build/mega2560/arduino/wiring_digital.d

.build/mega2560/arduino/wiring_shift.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
	@echo [93marduino/wiring_shift.c[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
include .build/mega2560/arduino/wiring_shift.d

.build/mega2560/arduino/wiring_pulse.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
	@echo [93marduino/wiring_pulse.c[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
include .build/mega2560/arduino/wiring_pulse.d






.build/mega2560/arduino/Stream.o : /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
	@echo [93marduino/Stream.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
include .build/mega2560/arduino/Stream.d

.build/mega2560/arduino/HardwareSerial.o : /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
	@echo [93marduino/HardwareSerial.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
include .build/mega2560/arduino/HardwareSerial.d

.build/mega2560/arduino/CDC.o : /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
	@echo [93marduino/CDC.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
include .build/mega2560/arduino/CDC.d

.build/mega2560/arduino/new.o : /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
	@echo [93marduino/new.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
include .build/mega2560/arduino/new.d

.build/mega2560/arduino/IPAddress.o : /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
	@echo [93marduino/IPAddress.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
include .build/mega2560/arduino/IPAddress.d

.build/mega2560/arduino/Print.o : /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
	@echo [93marduino/Print.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
include .build/mega2560/arduino/Print.d

.build/mega2560/arduino/WString.o : /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
	@echo [93marduino/WString.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
include .build/mega2560/arduino/WString.d

.build/mega2560/arduino/HID.o : /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
	@echo [93marduino/HID.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
include .build/mega2560/arduino/HID.d

.build/mega2560/arduino/Tone.o : /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
	@echo [93marduino/Tone.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
include .build/mega2560/arduino/Tone.d

.build/mega2560/arduino/main.o : /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
	@echo [93marduino/main.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
include .build/mega2560/arduino/main.d

.build/mega2560/arduino/USBCore.o : /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
	@echo [93marduino/USBCore.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
include .build/mega2560/arduino/USBCore.d

.build/mega2560/arduino/WMath.o : /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
	@echo [93marduino/WMath.cpp[0m
	@mkdir -p .build/mega2560/arduino
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
include .build/mega2560/arduino/WMath.d



.build/mega2560/arduino/libarduino.a : .build/mega2560/arduino/wiring.o .build/mega2560/arduino/WInterrupts.o .build/mega2560/arduino/wiring_analog.o .build/mega2560/arduino/wiring_digital.o .build/mega2560/arduino/wiring_shift.o .build/mega2560/arduino/wiring_pulse.o .build/mega2560/arduino/Stream.o .build/mega2560/arduino/HardwareSerial.o .build/mega2560/arduino/CDC.o .build/mega2560/arduino/new.o .build/mega2560/arduino/IPAddress.o .build/mega2560/arduino/Print.o .build/mega2560/arduino/WString.o .build/mega2560/arduino/HID.o .build/mega2560/arduino/Tone.o .build/mega2560/arduino/main.o .build/mega2560/arduino/USBCore.o .build/mega2560/arduino/WMath.o
	@echo [92mLinking libarduino.a[0m
	@/usr/bin/avr-ar rcs $@ $^















.build/mega2560/src/MPU9150Lib.o : src/MPU9150Lib.cpp
	@echo [93msrc/MPU9150Lib.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MPU9150Lib.cpp
include .build/mega2560/src/MPU9150Lib.d

.build/mega2560/src/CalLib.o : src/CalLib.cpp
	@echo [93msrc/CalLib.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/CalLib.cpp
include .build/mega2560/src/CalLib.d

.build/mega2560/src/Lights.o : src/Lights.cpp
	@echo [93msrc/Lights.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Lights.cpp
include .build/mega2560/src/Lights.d

.build/mega2560/src/inv_mpu.o : src/inv_mpu.cpp
	@echo [93msrc/inv_mpu.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/inv_mpu.cpp
include .build/mega2560/src/inv_mpu.d

.build/mega2560/src/FreeMem.o : src/FreeMem.cpp
	@echo [93msrc/FreeMem.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/FreeMem.cpp
include .build/mega2560/src/FreeMem.d

.build/mega2560/src/Thrusters2X1.o : src/Thrusters2X1.cpp
	@echo [93msrc/Thrusters2X1.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Thrusters2X1.cpp
include .build/mega2560/src/Thrusters2X1.d

.build/mega2560/src/Pilot.o : src/Pilot.cpp
	@echo [93msrc/Pilot.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Pilot.cpp
include .build/mega2560/src/Pilot.d

.build/mega2560/src/openrov_servo.o : src/openrov_servo.cpp
	@echo [93msrc/openrov_servo.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/openrov_servo.cpp
include .build/mega2560/src/openrov_servo.d

.build/mega2560/src/MS5803_14BA.o : src/MS5803_14BA.cpp
	@echo [93msrc/MS5803_14BA.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MS5803_14BA.cpp
include .build/mega2560/src/MS5803_14BA.d

.build/mega2560/src/Device.o : src/Device.cpp
	@echo [93msrc/Device.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Device.cpp
include .build/mega2560/src/Device.d

.build/mega2560/src/CameraMount.o : src/CameraMount.cpp
	@echo [93msrc/CameraMount.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/CameraMount.cpp
include .build/mega2560/src/CameraMount.d

.build/mega2560/src/I2Cdev.o : src/I2Cdev.cpp
	@echo [93msrc/I2Cdev.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/I2Cdev.cpp
include .build/mega2560/src/I2Cdev.d

.build/mega2560/src/CalibrationLaser.o : src/CalibrationLaser.cpp
	@echo [93msrc/CalibrationLaser.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/CalibrationLaser.cpp
include .build/mega2560/src/CalibrationLaser.d

.build/mega2560/src/MinIMU9AHRS.o : src/MinIMU9AHRS.cpp
	@echo [93msrc/MinIMU9AHRS.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU9AHRS.cpp
include .build/mega2560/src/MinIMU9AHRS.d

.build/mega2560/src/MinIMU_matrix.o : src/MinIMU_matrix.cpp
	@echo [93msrc/MinIMU_matrix.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU_matrix.cpp
include .build/mega2560/src/MinIMU_matrix.d

.build/mega2560/src/MinIMU_Output.o : src/MinIMU_Output.cpp
	@echo [93msrc/MinIMU_Output.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU_Output.cpp
include .build/mega2560/src/MinIMU_Output.d

.build/mega2560/src/MinIMU_L3G.o : src/MinIMU_L3G.cpp
	@echo [93msrc/MinIMU_L3G.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU_L3G.cpp
include .build/mega2560/src/MinIMU_L3G.d

.build/mega2560/src/Pin.o : src/Pin.cpp
	@echo [93msrc/Pin.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Pin.cpp
include .build/mega2560/src/Pin.d

.build/mega2560/src/MinIMU_I2C.o : src/MinIMU_I2C.cpp
	@echo [93msrc/MinIMU_I2C.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU_I2C.cpp
include .build/mega2560/src/MinIMU_I2C.d

.build/mega2560/src/Cape.o : src/Cape.cpp
	@echo [93msrc/Cape.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Cape.cpp
include .build/mega2560/src/Cape.d

.build/mega2560/src/Motors.o : src/Motors.cpp
	@echo [93msrc/Motors.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Motors.cpp
include .build/mega2560/src/Motors.d

.build/mega2560/src/MinIMU_Compass.o : src/MinIMU_Compass.cpp
	@echo [93msrc/MinIMU_Compass.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU_Compass.cpp
include .build/mega2560/src/MinIMU_Compass.d

.build/mega2560/src/Settings.o : src/Settings.cpp
	@echo [93msrc/Settings.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Settings.cpp
include .build/mega2560/src/Settings.d

.build/mega2560/src/MPUQuaternion.o : src/MPUQuaternion.cpp
	@echo [93msrc/MPUQuaternion.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MPUQuaternion.cpp
include .build/mega2560/src/MPUQuaternion.d

.build/mega2560/src/MinIMU_Vector.o : src/MinIMU_Vector.cpp
	@echo [93msrc/MinIMU_Vector.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU_Vector.cpp
include .build/mega2560/src/MinIMU_Vector.d

.build/mega2560/src/controllerboard25.o : src/controllerboard25.cpp
	@echo [93msrc/controllerboard25.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/controllerboard25.cpp
include .build/mega2560/src/controllerboard25.d

.build/mega2560/src/Timer.o : src/Timer.cpp
	@echo [93msrc/Timer.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Timer.cpp
include .build/mega2560/src/Timer.d

.build/mega2560/src/MinIMU_DCM.o : src/MinIMU_DCM.cpp
	@echo [93msrc/MinIMU_DCM.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU_DCM.cpp
include .build/mega2560/src/MinIMU_DCM.d

.build/mega2560/src/MinIMU9.o : src/MinIMU9.cpp
	@echo [93msrc/MinIMU9.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU9.cpp
include .build/mega2560/src/MinIMU9.d

.build/mega2560/src/MinIMU_LSM303.o : src/MinIMU_LSM303.cpp
	@echo [93msrc/MinIMU_LSM303.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MinIMU_LSM303.cpp
include .build/mega2560/src/MinIMU_LSM303.d

.build/mega2560/src/MPUVector3.o : src/MPUVector3.cpp
	@echo [93msrc/MPUVector3.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MPUVector3.cpp
include .build/mega2560/src/MPUVector3.d

.build/mega2560/src/Command.o : src/Command.cpp
	@echo [93msrc/Command.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/Command.cpp
include .build/mega2560/src/Command.d

.build/mega2560/src/inv_mpu_dmp_motion_driver.o : src/inv_mpu_dmp_motion_driver.cpp
	@echo [93msrc/inv_mpu_dmp_motion_driver.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/inv_mpu_dmp_motion_driver.cpp
include .build/mega2560/src/inv_mpu_dmp_motion_driver.d

.build/mega2560/src/MPU9150.o : src/MPU9150.cpp
	@echo [93msrc/MPU9150.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c src/MPU9150.cpp
include .build/mega2560/src/MPU9150.d

.build/mega2560/src/OpenROV.o : .build/mega2560/src/OpenROV.cpp
	@echo [93msrc/OpenROV.cpp[0m
	@mkdir -p .build/mega2560/src
	@/usr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=100 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/mega -I/usr/share/arduino/libraries/EEPROM -I/usr/share/arduino/libraries/SPI -I/usr/share/arduino/libraries/Wire -I/usr/share/arduino/libraries/Wire/utility -I/usr/share/arduino/hardware/arduino/cores/arduino -fno-exceptions -iquote src  -o $@ -c .build/mega2560/src/OpenROV.cpp
include .build/mega2560/src/OpenROV.d







.build/mega2560/firmware.elf : .build/mega2560/src/MPU9150Lib.o .build/mega2560/src/CalLib.o .build/mega2560/src/Lights.o .build/mega2560/src/inv_mpu.o .build/mega2560/src/FreeMem.o .build/mega2560/src/Thrusters2X1.o .build/mega2560/src/Pilot.o .build/mega2560/src/openrov_servo.o .build/mega2560/src/MS5803_14BA.o .build/mega2560/src/Device.o .build/mega2560/src/CameraMount.o .build/mega2560/src/I2Cdev.o .build/mega2560/src/CalibrationLaser.o .build/mega2560/src/MinIMU9AHRS.o .build/mega2560/src/MinIMU_matrix.o .build/mega2560/src/MinIMU_Output.o .build/mega2560/src/MinIMU_L3G.o .build/mega2560/src/Pin.o .build/mega2560/src/MinIMU_I2C.o .build/mega2560/src/Cape.o .build/mega2560/src/Motors.o .build/mega2560/src/MinIMU_Compass.o .build/mega2560/src/Settings.o .build/mega2560/src/MPUQuaternion.o .build/mega2560/src/MinIMU_Vector.o .build/mega2560/src/controllerboard25.o .build/mega2560/src/Timer.o .build/mega2560/src/MinIMU_DCM.o .build/mega2560/src/MinIMU9.o .build/mega2560/src/MinIMU_LSM303.o .build/mega2560/src/MPUVector3.o .build/mega2560/src/Command.o .build/mega2560/src/inv_mpu_dmp_motion_driver.o .build/mega2560/src/MPU9150.o .build/mega2560/src/OpenROV.o .build/mega2560/EEPROM/libEEPROM.a .build/mega2560/SPI/libSPI.a .build/mega2560/Wire/libWire.a .build/mega2560/arduino/libarduino.a
	@echo [92mLinking firmware.elf[0m
	@/usr/bin/avr-gcc -mmcu=atmega2560 -Wl,-Os -Wl,--gc-sections -o $@ $^ -lm


.build/mega2560/firmware.hex : .build/mega2560/firmware.elf
	@echo [92mConverting to firmware.hex[0m
	@/usr/bin/avr-objcopy -O ihex -R .eeprom $^ $@

include .build/mega2560/src/dependencies.d .build/mega2560/arduino/dependencies.d .build/mega2560/EEPROM/dependencies.d .build/mega2560/SPI/dependencies.d .build/mega2560/Wire/dependencies.d

all : .build/mega2560/firmware.hex
	@true

