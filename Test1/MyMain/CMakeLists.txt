cmake_minimum_required(VERSION 3.10.2)
project(MyMain)

set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)
# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/include/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/include/TutorialConfig.h"
  )

set ( PROJECT_LINK_LIBS MyLib.so )
link_directories( ${CMAKE_SOURCE_DIR}/build/MyLib )
#Bring the headers, such as Student.h into the project
include_directories(include ../MyLib/include "${PROJECT_BINARY_DIR}")

# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(MyMain ${SOURCES})
target_link_libraries(MyMain ${PROJECT_LINK_LIBS} )