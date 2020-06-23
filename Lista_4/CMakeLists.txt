cmake_minimum_required(VERSION 3.5)

project(Lista_4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lista_4 main.cpp)
add_executable(zad1 Zadanie_1.cpp wektor.cpp wektor.h)
add_executable(zad2 Zadanie_2.cpp zespolona.cpp zespolona.h)
add_executable(zad3 Zadanie_3.cpp random.cpp random.h)
add_executable(zad5 Zadanie_5.cpp)
add_executable(zad6 Zadanie_6.cpp)
