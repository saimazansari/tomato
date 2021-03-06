cmake_minimum_required(VERSION 3.16)
project(tomato C)

set(CMAKE_C_STANDARD 99)

add_executable(tomato
        main.c
        menu.h
        menu.c
        order.h
        order.c
        category.c
        category.h)
