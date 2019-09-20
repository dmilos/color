@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src rgb_acos.cpp
cl /EHsc  -I../../../../src rgb_atan2.cpp
cl /EHsc  -I../../../../src rgb_hex.cpp
cl /EHsc  -I../../../../src rgb_polar.cpp
cl /EHsc  -I../../../../src hsi.cpp
cl /EHsc  -I../../../../src hsl.cpp
cl /EHsc  -I../../../../src hsv.cpp
cl /EHsc  -I../../../../src hwb.cpp