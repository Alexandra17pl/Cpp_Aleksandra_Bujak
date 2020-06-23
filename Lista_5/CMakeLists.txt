cmake_minimum_required(VERSION 3.5)

project(lista_6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(zad1 Zadanie_1.cpp stos.cpp stos.h)
add_executable(zad2 Zadanie_2.cpp stos2.cpp stos2.h)
add_executable(zad3 Zadanie_3.cpp stos3.cpp stos3.h)
add_executable(zad4 Zadanie_4.cpp stos4.cpp stos4.h)
