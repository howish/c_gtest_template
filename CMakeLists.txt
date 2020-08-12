cmake_minimum_required(VERSION 3.13)

# Test directory setting
set(TestName Project_Test)
set(SOURCE_FOLDER 
    src
)
set(TEST_FOLDER 
    test
)


# Testing setting
set(PROJNAME MakeTest)
project(${PROJNAME} C CXX)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()
add_subdirectory(googletest)


# Add source libraries
file(GLOB Headers
    ${SOURCE_FOLDER}/*.h
)
file(GLOB Sources
    ${SOURCE_FOLDER}/*.c
)

add_library(${PROJNAME} STATIC ${Sources} ${Headers})

# Add test libraries
file(GLOB Sources "${TEST_FOLDER}/*.cc")

add_executable(${TestName} ${Sources})

target_link_libraries(${TestName} PUBLIC
    gtest_main
    TryGoogleTest
)
add_test(
    NAME ${TestName}
    COMMAND ${TestName}
)
