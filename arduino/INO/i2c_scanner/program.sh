#!/bin/bash

avrdude -P /dev/spidev1.0 -c linuxspi -vvv -p m2560 -U flash:w:.build/mega2560/firmware.hex
