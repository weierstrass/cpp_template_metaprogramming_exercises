cmake_minimum_required (VERSION 2.8)

project (template_exercises)


set (CMAKE_CXX_STANDARD_REQUIRED 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(CMAKE_BUILD_TYPE Release)

add_subdirectory (src) 

add_subdirectory (test)
enable_testing ()

add_test (NAME template_test COMMAND template_exercises_test)

INCLUDE(CPack)
