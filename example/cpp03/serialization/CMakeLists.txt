cmake_minimum_required(VERSION 3.0)
project(serialization)

find_package(Boost REQUIRED COMPONENTS serialization)

add_executable(${PROJECT_NAME}-client client.cpp)
target_link_libraries(${PROJECT_NAME}-client PRIVATE Boost::serialization )

add_executable(${PROJECT_NAME}-server server.cpp)
target_link_libraries(${PROJECT_NAME}-server PRIVATE Boost::serialization )
