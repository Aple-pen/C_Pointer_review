cmake_minimum_required(VERSION 3.20)
project(class)

set(CMAKE_CXX_STANDARD 14)

include_directories(Calculator)
include_directories(Printer)

add_executable(class
    Calculator/Cal.cpp
    Calculator/Calculator.cpp
    Calculator/Calculator.h
    FruitSale/FruitSaleSim1.cpp
    Printer/Printer.h
    Printer/PrinterMain.cpp)
