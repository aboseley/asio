cmake_minimum_required(VERSION 3.0)
project(iostreams)
add_executable(${PROJECT_NAME}-daytime-client daytime_client.cpp)
add_executable(${PROJECT_NAME}-daytime-server daytime_server.cpp)
add_executable(${PROJECT_NAME}-http-client http_client.cpp)

