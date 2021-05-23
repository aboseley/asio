cmake_minimum_required(VERSION 3.0)
project(fork)
add_executable(${PROJECT_NAME}-daemon daemon.cpp)
add_executable(${PROJECT_NAME}-process_per_connection process_per_connection.cpp)



