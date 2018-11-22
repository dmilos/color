#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../src inplace_conversion.cpp  -o  inplace_conversion
g++ -fexceptions -std=c++11 -g -I../../../src memset.cpp              -o  memset
