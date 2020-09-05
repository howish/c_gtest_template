cmake_minimum_required(VERSION 3.13)

set(PROJNAME PRO)
project(${PROJNAME})

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include_directories(src/PRO_Lib)
include_directories(src/INI_Lib)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(googletest)
