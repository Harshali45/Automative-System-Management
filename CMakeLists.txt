
cmake_minimum_required(VERSION 3.10)
project(AutomotiveSystemManagement)

set(CMAKE_CXX_STANDARD 14)

find_package(SQLite3 REQUIRED)
include_directories(${SQLite3_INCLUDE_DIRS})

add_executable(AutomotiveSystemManagement
    db/DatabaseManager.cpp
    db/DatabaseManager.h
    main.cpp
)

target_link_libraries(AutomotiveSystemManagement ${SQLite3_LIBRARIES})
