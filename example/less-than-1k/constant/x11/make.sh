#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src gray.cpp      -o  gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src green.cpp     -o  green
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src maroon.cpp    -o  maroon
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src purple.cpp    -o  purple
