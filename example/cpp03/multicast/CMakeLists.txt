cmake_minimum_required(VERSION 3.0)
project(multicast)
add_executable(${PROJECT_NAME}-receiver receiver.cpp)
add_executable(${PROJECT_NAME}-sender sender.cpp)