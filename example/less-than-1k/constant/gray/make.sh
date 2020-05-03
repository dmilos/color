#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src orange.cpp    -o  orange
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lavander.cpp    -o  lavander
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src gray.cpp    -o  gray
