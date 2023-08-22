#!/bin/bash
gcc -c -g -fPIC -Wall *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
