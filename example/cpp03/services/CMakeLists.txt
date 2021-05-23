cmake_minimum_required(VERSION 3.0)
project(services)
add_executable(${PROJECT_NAME}-daytime-client
        daytime_client.cpp
        logger_service.cpp)