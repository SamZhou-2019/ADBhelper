cmake_minimum_required(VERSION 3.17)
project(ADBhelper C)

set(CMAKE_C_STANDARD 99)

add_executable(ADBhelper main.c envi.c intro.c usage.c)