cmake_minimum_required(VERSION 3.24)
project(workerManage)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(workerManage
        main.cpp
        workerManage.cpp
        workerManage.h worker.cpp employee.cpp manager.cpp boss.cpp)
