cmake_minimum_required(VERSION 3.23)
project(detectOs C)

set(CMAKE_C_STANDARD 23)

add_executable(detectOs exampleUse.c dos.h)
