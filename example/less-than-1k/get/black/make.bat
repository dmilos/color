@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% cmy.cpp
cl /EHsc  -I../../../../src /D%PP2F% cmyk.cpp
cl /EHsc  -I../../../../src /D%PP2F% gray.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsl.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsv.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb.cpp
cl /EHsc  -I../../../../src /D%PP2F% yiq.cpp
cl /EHsc  -I../../../../src /D%PP2F% yuv.cpp
cl /EHsc  -I../../../../src /D%PP2F% hwb.cpp


