cmake_minimum_required(VERSION 3.0)
project(http)
add_executable(${PROJECT_NAME}-async-client async_client.cpp)
add_executable(${PROJECT_NAME}-sync-client sync_client.cpp)



