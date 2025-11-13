cmake_minimum_required(VERSION 4.0)
project(TransportInheritance)

set(CMAKE_CXX_STANDARD 20)

add_executable(TransportInheritance src/main.cpp
        src/Transport.cpp
        include/Transport.h
        src/Truck.cpp
        include/Truck.h
        src/Airplane.cpp
        include/Airplane.h
        src/Ship.cpp
        include/Ship.h)
