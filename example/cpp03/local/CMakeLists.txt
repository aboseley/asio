cmake_minimum_required(VERSION 3.0)
project(local)
add_executable(${PROJECT_NAME}-connection-pair connect_pair.cpp)
add_executable(${PROJECT_NAME}-stream-client stream_client.cpp)
add_executable(${PROJECT_NAME}-iostream-client iostream_client.cpp)
add_executable(${PROJECT_NAME}-stream-server stream_server.cpp)

