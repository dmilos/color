@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../src inplace_conversion.cpp
cl /EHsc  -I../../../src memset.cpp
