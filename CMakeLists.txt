# Arduino CMake toolchain
set(CMAKE_TOOLCHAIN_FILE cmake/ArduinoToolchain.cmake)

cmake_minimum_required(VERSION 3.10)

project(AVR-INTERRUPT-RINGBUF C CXX)

add_subdirectory(examples)
