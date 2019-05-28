cmake_minimum_required(VERSION 3.14)
project(ACA_TermProject C)

set(CMAKE_C_STANDARD 99)

add_executable(ACA_TermProject main.c Queue/Queue.h Queue/Queue.c)