echo off
set  left_folder=..\out\hue
set  right_folder=..\..\..\..\mirror\example\test\out\hue
set  target_folder=..\out\check
set  program_TC=..\out\tc.exe

%program_TC% %left_folder%\referent.tga           %right_folder%\referent.tga           %target_folder%\referent.tga
%program_TC% %left_folder%\difference.tga         %right_folder%\difference.tga         %target_folder%\difference.tga
%program_TC% %left_folder%\hsi.tga                %right_folder%\hsi.tga                %target_folder%\hsi.tga
%program_TC% %left_folder%\hsv.tga                %right_folder%\hsv.tga                %target_folder%\hsv.tga
%program_TC% %left_folder%\rgb-default.tga        %right_folder%\rgb-default.tga        %target_folder%\rgb-default.tga
%program_TC% %left_folder%\rgb-hexagon.tga        %right_folder%\rgb-hexagon.tga        %target_folder%\rgb-hexagon.tga
%program_TC% %left_folder%\rgb-polar-acos.tga     %right_folder%\rgb-polar-acos.tga     %target_folder%\rgb-polar-acos.tga
%program_TC% %left_folder%\rgb-polar-atan2.tga    %right_folder%\rgb-polar-atan2.tga    %target_folder%\rgb-polar-atan2.tga
%program_TC% %left_folder%\rgb-polar-default.tga  %right_folder%\rgb-polar-default.tga  %target_folder%\rgb-polar-default.tga

pause
