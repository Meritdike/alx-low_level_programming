#!/bin/bash
wget -P /tmp https://https://github.com/dGunju/alx-low_level_programming/blob/master/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so