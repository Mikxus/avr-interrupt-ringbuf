cmake_minimum_required(VERSION 3.10)
project(AVR-INTERRUPT-RINGBUF)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)

# Add your source files here
set(SOURCES
    src/rinbuffer.cpp
)

# Add your header files here
set(HEADERS
    src/rinbuffer.h
)

# Create the executable
add_executable(rinbuffer ${SOURCES} ${HEADERS})