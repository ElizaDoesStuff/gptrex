cmake_minimum_required(VERSION 3.30)
project(gptrex)

add_executable(gptrex Source/main.cpp)
target_link_libraries(gptrex -libstdc++ -libgcc)
