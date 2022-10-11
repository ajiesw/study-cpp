cmake_minimum_required(VERSION 3.23)
project(Cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cpp main.cpp)

add_subdirectory(cpp01base)
add_subdirectory(cpp02cincout)
add_subdirectory(cpp03ReferencesPointers)
add_subdirectory(cpp04Array)
add_subdirectory(cpp05)