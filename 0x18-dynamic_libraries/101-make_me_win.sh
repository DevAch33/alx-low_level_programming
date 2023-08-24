#!/bin/bash
wget -P /tmp https://github.com/DevAch33/alx-low_level_programming/edit/master/0x18-dynamic_libraries/programtest.so
export LD_PRELOAD=/tmp/programtest.so
