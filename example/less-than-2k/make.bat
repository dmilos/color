@rem !/bin/msdos
@
@echo %cd%
@cd akin
@call make.bat
@cd ..
@
@cd get
@call make.bat
@cd ..
@
@cd operation
@call make.bat
@cd ..
@
@cd place
@call make.bat
@cd ..
@
@cl /EHsc  -I../../src /D%PP2F% memfill.cpp
@
