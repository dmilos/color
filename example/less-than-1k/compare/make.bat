@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../src brighter_rgb.cpp
cl /EHsc  -I../../../src darker_rgb.cpp
cl /EHsc  -I../../../src different_rgb.cpp
cl /EHsc  -I../../../src equal_rgb.cpp
cl /EHsc  -I../../../src great_or_equal.cpp
cl /EHsc  -I../../../src great_strict_rgb.cpp
cl /EHsc  -I../../../src less_or_equal.cpp
cl /EHsc  -I../../../src less_strict.cpp
