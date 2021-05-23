cmake_minimum_required(VERSION 3.0)
project(echo)
add_executable(${PROJECT_NAME}-async_tcp_echo_server async_tcp_echo_server.cpp)
add_executable(${PROJECT_NAME}-async_udp_echo_server async_udp_echo_server.cpp)
add_executable(${PROJECT_NAME}-blocking_tcp_echo_client blocking_tcp_echo_client.cpp )
add_executable(${PROJECT_NAME}-blocking_tcp_echo_server blocking_tcp_echo_server.cpp )
add_executable(${PROJECT_NAME}-blocking_udp_echo_client blocking_udp_echo_client.cpp )
add_executable(${PROJECT_NAME}-blocking_udp_echo_server blocking_udp_echo_server.cpp )


