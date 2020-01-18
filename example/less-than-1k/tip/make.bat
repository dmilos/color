@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../src /D%PP2F% inplace_conversion.cpp
cl /EHsc  -I../../../src /D%PP2F% memset.cpp
