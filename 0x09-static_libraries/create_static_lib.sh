#!/bin/bash
gcc -c *.c 
ar rcs -L liball.a *.o
