cmake_minimum_required(VERSION 3.0)
project(http-server4)

add_executable(${PROJECT_NAME}
        file_handler.cpp
        main.cpp
        mime_types.cpp
        reply.cpp
        request_parser.cpp
        server.cpp
        )