cmake_minimum_required(VERSION 3.0)
project(http-server3)

add_executable(${PROJECT_NAME}
        connection.cpp
        main.cpp
        mime_types.cpp
        reply.cpp
        request_handler.cpp
        request_parser.cpp
        server.cpp)
