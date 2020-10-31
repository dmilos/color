@rem !/bin/msdos
@
@echo %cd%
@
@cl /EHsc  -I../../src /D%PP2F% memfill.cpp
@
@cd gray
@call make.bat
@cd ..
@
@cd hue
@call make.bat
@cd ..
@
