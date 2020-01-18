@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% orange.cpp
cl /EHsc  -I../../../../src /D%PP2F% lavander.cpp
cl /EHsc  -I../../../../src /D%PP2F% gray.cpp
