@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% rgb_acos.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb_atan2.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb_hex.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb_polar.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsi.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsl.cpp
cl /EHsc  -I../../../../src /D%PP2F% hsv.cpp
cl /EHsc  -I../../../../src /D%PP2F% hwb.cpp