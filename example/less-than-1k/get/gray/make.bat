@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% cmy.cpp
cl /EHsc  -I../../../../src /D%PP2F% cmyk.cpp
cl /EHsc  -I../../../../src /D%PP2F% gray.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsl.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsv.cpp
cl /EHsc  -I../../../../src /D%PP2F% lab.cpp
cl /EHsc  -I../../../../src /D%PP2F% lms.cpp
cl /EHsc  -I../../../../src /D%PP2F% luv.cpp

cl /EHsc  -I../../../../src /D%PP2F% rgb_average.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb_lightness.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb_middle.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb_yuv709.cpp

cl /EHsc  -I../../../../src /D%PP2F% YCgCo.cpp
cl /EHsc  -I../../../../src /D%PP2F% YDbDr.cpp
cl /EHsc  -I../../../../src /D%PP2F% yiq.cpp
cl /EHsc  -I../../../../src /D%PP2F% yuv.cpp