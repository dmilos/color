@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% lab.cpp
cl /EHsc  -I../../../../src /D%PP2F% rgb.cpp
