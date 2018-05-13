echo off
set  left_folder=..\out\extract
set  right_folder=..\out\extract
set  target_folder=..\out\check
set  program_TC=..\out\tc.exe



%program_TC%    %left_folder%\saturation-hsl-1-000-hsi-ref.tga         %right_folder%\saturation-hsl-1-000-hsi-rgb.tga        %target_folder%\saturation-hsl-1-000-hsi-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-000-hsl-ref.tga         %right_folder%\saturation-hsl-1-000-hsl-rgb.tga        %target_folder%\saturation-hsl-1-000-hsl-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-000-hsv-ref.tga         %right_folder%\saturation-hsl-1-000-hsv-rgb.tga        %target_folder%\saturation-hsl-1-000-hsv-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-025-hsi-ref.tga         %right_folder%\saturation-hsl-1-025-hsi-rgb.tga        %target_folder%\saturation-hsl-1-025-hsi-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-025-hsl-ref.tga         %right_folder%\saturation-hsl-1-025-hsl-rgb.tga        %target_folder%\saturation-hsl-1-025-hsl-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-025-hsv-ref.tga         %right_folder%\saturation-hsl-1-025-hsv-rgb.tga        %target_folder%\saturation-hsl-1-025-hsv-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-050-hsi-ref.tga         %right_folder%\saturation-hsl-1-050-hsi-rgb.tga        %target_folder%\saturation-hsl-1-050-hsi-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-050-hsl-ref.tga         %right_folder%\saturation-hsl-1-050-hsl-rgb.tga        %target_folder%\saturation-hsl-1-050-hsl-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-050-hsv-ref.tga         %right_folder%\saturation-hsl-1-050-hsv-rgb.tga        %target_folder%\saturation-hsl-1-050-hsv-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-075-hsi-ref.tga         %right_folder%\saturation-hsl-1-075-hsi-rgb.tga        %target_folder%\saturation-hsl-1-075-hsi-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-075-hsl-ref.tga         %right_folder%\saturation-hsl-1-075-hsl-rgb.tga        %target_folder%\saturation-hsl-1-075-hsl-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-075-hsv-ref.tga         %right_folder%\saturation-hsl-1-075-hsv-rgb.tga        %target_folder%\saturation-hsl-1-075-hsv-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-100-hsi-ref.tga         %right_folder%\saturation-hsl-1-100-hsi-rgb.tga        %target_folder%\saturation-hsl-1-100-hsi-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-100-hsl-ref.tga         %right_folder%\saturation-hsl-1-100-hsl-rgb.tga        %target_folder%\saturation-hsl-1-100-hsl-diff.tga
%program_TC%    %left_folder%\saturation-hsl-1-100-hsv-ref.tga         %right_folder%\saturation-hsl-1-100-hsv-rgb.tga        %target_folder%\saturation-hsl-1-100-hsv-diff.tga


pause