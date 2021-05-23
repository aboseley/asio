cmake_minimum_required(VERSION 3.0)
project(http-server2)

add_executable(${PROJECT_NAME}
        connection.cpp
        io_context_pool.cpp
        main.cpp
        mime_types.cpp
        reply.cpp
        request_handler.cpp
        request_parser.cpp
        server.cpp)

