@rem !/bin/msdos
@
@echo %cd%
@
@cd compare
@call make.bat
@cd ..
@
@cl /EHsc  -I../../../src /D%PP2F% addition.cpp
@cl /EHsc  -I../../../src /D%PP2F% divide.cpp
@cl /EHsc  -I../../../src /D%PP2F% scale.cpp
@cl /EHsc  -I../../../src /D%PP2F% subtraction.cpp
