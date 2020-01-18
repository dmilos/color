@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../src /D%PP2F% brighter_rgb.cpp
cl /EHsc  -I../../../src /D%PP2F% darker_rgb.cpp
cl /EHsc  -I../../../src /D%PP2F% different_rgb.cpp
cl /EHsc  -I../../../src /D%PP2F% equal_rgb.cpp
cl /EHsc  -I../../../src /D%PP2F% great_or_equal.cpp
cl /EHsc  -I../../../src /D%PP2F% great_strict_rgb.cpp
cl /EHsc  -I../../../src /D%PP2F% less_or_equal.cpp
cl /EHsc  -I../../../src /D%PP2F% less_strict.cpp
