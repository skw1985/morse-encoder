cmake_minimum_required(VERSION 3.10)

project(MorseEncoder)

set(libfiles src/encoder.cpp)

add_library(encoder STATIC ${libfiles})

add_executable(app main.cpp)

target_link_libraries(app encoder)