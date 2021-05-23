cmake_minimum_required(VERSION 3.0)
project(porthopper)
add_executable(${PROJECT_NAME}-client client.cpp)
add_executable(${PROJECT_NAME}-server server.cpp)