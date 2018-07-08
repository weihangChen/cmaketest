cmake_minimum_required(VERSION 3.10.2)
include_directories ("${PROJECT_SOURCE_DIR}/MyLib")
project(MyTest)
add_subdirectory (MyLib)
add_subdirectory (MyMain)

 
# add the executable
# add_executable (Tutorial tutorial.cxx)
# target_link_libraries (Tutorial MathFunctions)