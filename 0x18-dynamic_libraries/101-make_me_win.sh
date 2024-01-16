#!/bin/bash
wget -P /tmp https://github.com/MedBens02/alx-low_level_programming/raw/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
