cmake_minimum_required(VERSION 3.26)
project(cash)

set(CMAKE_CXX_STANDARD 17)

add_executable(cash main.cpp
        CalculateCash.h
        CalculateCash.cpp
)
