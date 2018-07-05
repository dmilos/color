echo off
set  left_folder=..\out\operation
set  right_folder=..\..\..\..\mirror\example\test\out\operation
set  target_folder=..\out\check
set  program_TC=..\out\tc.exe

%program_TC% %left_folder%\bias-bgr.tga                        %right_folder%\bias-bgr.tga                      %target_folder%\bias-bgr.tga
%program_TC% %left_folder%\bias-gray.tga                       %right_folder%\bias-gray.tga                     %target_folder%\bias-gray.tga
%program_TC% %left_folder%\dist_CIE76_rgb2rgb.tga              %right_folder%\dist_CIE76_rgb2rgb.tga            %target_folder%\dist_CIE76_rgb2rgb.tga
%program_TC% %left_folder%\dist_CIE94g_rgb2rgb.tga             %right_folder%\dist_CIE94g_rgb2rgb.tga           %target_folder%\dist_CIE94g_rgb2rgb.tga
%program_TC% %left_folder%\dist_CIE94t_rgb2rgb.tga             %right_folder%\dist_CIE94t_rgb2rgb.tga           %target_folder%\dist_CIE94t_rgb2rgb.tga
%program_TC% %left_folder%\dist_CIEDE2000_rgb2rgb.tga          %right_folder%\dist_CIEDE2000_rgb2rgb.tga        %target_folder%\dist_CIEDE2000_rgb2rgb.tga
%program_TC% %left_folder%\dist_deltaG_rgb2rgb.tga             %right_folder%\dist_deltaG_rgb2rgb.tga           %target_folder%\dist_deltaG_rgb2rgb.tga
%program_TC% %left_folder%\dist_euclid_rgb2rgb.tga             %right_folder%\dist_euclid_rgb2rgb.tga           %target_folder%\dist_euclid_rgb2rgb.tga
%program_TC% %left_folder%\dist_hslS_rgb2rgb.tga               %right_folder%\dist_hslS_rgb2rgb.tga             %target_folder%\dist_hslS_rgb2rgb.tga
%program_TC% %left_folder%\dist_rgbS_rgb2rgb.tga               %right_folder%\dist_rgbS_rgb2rgb.tga             %target_folder%\dist_rgbS_rgb2rgb.tga
%program_TC% %left_folder%\gain-bgr.tga                        %right_folder%\gain-bgr.tga                      %target_folder%\gain-bgr.tga
%program_TC% %left_folder%\gain-gray.tga                       %right_folder%\gain-gray.tga                     %target_folder%\gain-gray.tga
%program_TC% %left_folder%\gamma-bgr.tga                       %right_folder%\gamma-bgr.tga                     %target_folder%\gamma-bgr.tga
%program_TC% %left_folder%\gamma-gray.tga                      %right_folder%\gamma-gray.tga                    %target_folder%\gamma-gray.tga

pause
