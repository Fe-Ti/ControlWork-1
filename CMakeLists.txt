# Copyright 2021 Fe-Ti <btm.007@mail.ru>

cmake_minimum_required(VERSION 3.4)

project(control_work)

set(LIB_SOURCE sources/sqrt.cpp)
set(DEMO_SOURCE examples/demo.cpp)

include_directories(include)

add_library(sqrt_lib ${LIB_SOURCE})
add_executable(demo ${DEMO_SOURCE})

target_link_libraries(demo sqrt_lib)

