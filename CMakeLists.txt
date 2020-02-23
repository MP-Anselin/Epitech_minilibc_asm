cmake_minimum_required(VERSION 3.15)
project(ASM_minilibc_2017 C)

set(CMAKE_C_STANDARD 11)

add_executable(ASM_minilibc_2017
        test_functions/main.c
        test_functions/test_memset.c
        test_functions/test_strlen.c)
