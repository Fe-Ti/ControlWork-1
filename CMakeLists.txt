# Copyright 2021 Fe-Ti <btm.007@mail.ru>

cmake_minimum_required(VERSION 3.4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_DEMO "Build demo" OFF)
option(BUILD_TEST "Build test" OFF)

project(sqrt_lib)

include_directories(include)
set(LIB_SOURCE sources/sqrt.cpp)
add_library(${PROJECT_NAME} ${LIB_SOURCE})

if(BUILD_DEMO)
	set(DEMO_SOURCE examples/demo.cpp)
	add_executable(demo ${DEMO_SOURCE})
	target_link_libraries(demo sqrt_lib)
endif()

if(BUILD_TEST)
	enable_testing()
	add_subdirectory(third-party/gtest)
	file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)
	add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})
	target_link_libraries(check ${PROJECT_NAME} gtest_main)
	add_test(NAME check COMMAND check)
endif()
