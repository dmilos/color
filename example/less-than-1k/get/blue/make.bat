@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src cmy.cpp
cl /EHsc  -I../../../../src cmyk.cpp
cl /EHsc  -I../../../../src gray.cpp
cl /EHsc  -I../../../../src hsl.cpp
cl /EHsc  -I../../../../src hsv.cpp
cl /EHsc  -I../../../../src rgb.cpp
cl /EHsc  -I../../../../src yiq.cpp
cl /EHsc  -I../../../../src yuv.cpp
