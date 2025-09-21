
cmake_minimum_required(VERSION 3.30)
project(gptrex)

add_library(Core
	Source/Network.cpp
	Source/Layer.cpp
	Source/Neuron.cpp
)

add_executable(gptrex main.cpp)
target_link_libraries(gptrex Core -libstdc++ -libgcc -static)
