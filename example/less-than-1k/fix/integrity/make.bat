@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src cmyk.cpp
cl /EHsc  -I../../../../src hsl.cpp
cl /EHsc  -I../../../../src hsv.cpp
cl /EHsc  -I../../../../src hwb.cpp
