cmake_minimum_required(VERSION 2.8)

 project(ColorExample_Project)

set( THIS_PROJECT "ColorExample__opencv_get"  )

add_executable( ${THIS_PROJECT}              red.cpp )


if( MSVC )
    target_include_directories( ${THIS_PROJECT}  PUBLIC  $ENV{OPENCV__msvc__INCLUDE} )
    #target_include_directories( ${THIS_PROJECT}  PUBLIC  $ENV{MATH_ROOT} )
    target_include_directories( ${THIS_PROJECT}  PUBLIC  $ENV{COLOR_ROOT} )

    target_link_libraries ( ${THIS_PROJECT}
        debug     $ENV{OPENCV__msvc_64_LIBFILE_DEBUG}
        optimized $ENV{OPENCV__msvc_64_LIBFILE_RELEASE}
     )

    target_link_directories( ${THIS_PROJECT}
        PUBLIC $<$<CONFIG:DEBUG>:$ENV{OPENCV__msvc_64_LIBDIR_DEBUG}>
        PUBLIC $<$<CONFIG:RELEASE>:$ENV{OPENCV__msvc_64_LIBDIR_RELEASE}>
     )

    set( OPENCV_BIN_DEBUG   $ENV{OPENCV__msvc_64_DLLDIR_DEBUG}   )
    set( OPENCV_BIN_RELEASE $ENV{OPENCV__msvc_64_DLLDIR_RELEASE} )
    configure_file( templatevcxproj.user.in ${THIS_PROJECT}.vcxproj.user   )

endif()





















