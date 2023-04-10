#!/bin/bash
gcc -c *.c
ar rc liball.a
ar src liball.a *.o
ranlib liball.a
