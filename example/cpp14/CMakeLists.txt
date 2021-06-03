project(cpp14_examples)
cmake_minimum_required(VERSION 3.0)

find_package(Boost REQUIRED COMPONENTS system chrono thread)
link_libraries(Boost::boost Boost::system Boost::chrono Boost::thread)

foreach(i RANGE 1 8)
   add_executable( operations-compose-${i} operations/composed_${i}.cpp)
endforeach()