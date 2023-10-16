#!/bin/bash
gcc -Wall -Wetra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
