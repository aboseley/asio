cmake_minimum_required(VERSION 3.0)
project(spawn)
find_package(Boost COMPONENTS context coroutine REQUIRED)
link_libraries(Boost::context Boost::coroutine)

add_executable(${PROJECT_NAME}-echo-server echo_server.cpp)
add_executable(${PROJECT_NAME}-parallel-grep parallel_grep.cpp)
