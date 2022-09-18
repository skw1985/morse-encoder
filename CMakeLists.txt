cmake_minimum_required(VERSION 3.10)

project(MorseEncoder)

add_subdirectory(googletest)

add_subdirectory(test)

set(libfiles src/encoder.cpp)

add_library(encoder STATIC ${libfiles})

add_executable(app main.cpp)

target_link_libraries(app encoder)

enable_testing()

add_custom_target(testapp COMMAND "test/apptests" DEPENDS apptests)