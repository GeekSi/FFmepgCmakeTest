# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.



find_library(
              log-lib
              log )




add_library(avcodec-57
            SHARED
            IMPORTED)

set_target_properties( avcodec-57
                       PROPERTIES IMPORTED_LOCATION
                       ${CMAKE_SOURCE_DIR}/libs/armeabi-v7a/libavcodec-57.so )




add_library(
             native-lib
             SHARED
             src/main/cpp/native-lib.cpp )



include_directories( /Users/siqing/Documents/work/workspace/ffmpeg/FFmpegTestCmake/app/libs/include )


target_link_libraries( native-lib avcodec-57
                       ${log-lib} )