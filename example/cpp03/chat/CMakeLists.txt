cmake_minimum_required(VERSION 3.0)
project(chat)
add_executable(${PROJECT_NAME}-client chat_client.cpp)
add_executable(${PROJECT_NAME}-server chat_server.cpp)
add_executable(posix_chat_client posix_chat_client.cpp)

