cmake_minimum_required(VERSION 3.10)

set(This apptests)

set(Sources test.cpp ../src/encoder.cpp)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC gtest_main)