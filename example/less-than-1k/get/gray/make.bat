@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src cmy.cpp
cl /EHsc  -I../../../../src cmyk.cpp
cl /EHsc  -I../../../../src gray.cpp
cl /EHsc  -I../../../../src hsl.cpp
cl /EHsc  -I../../../../src hsv.cpp
cl /EHsc  -I../../../../src lab.cpp
cl /EHsc  -I../../../../src lms.cpp
cl /EHsc  -I../../../../src luv.cpp

cl /EHsc  -I../../../../src rgb_average.cpp
cl /EHsc  -I../../../../src rgb_lightness.cpp
cl /EHsc  -I../../../../src rgb_middle.cpp
cl /EHsc  -I../../../../src rgb_yuv709.cpp

cl /EHsc  -I../../../../src YCgCo.cpp
cl /EHsc  -I../../../../src YDbDr.cpp
cl /EHsc  -I../../../../src yiq.cpp
cl /EHsc  -I../../../../src yuv.cpp