cmake_minimum_required(VERSION 3.0)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-std=c++14")

project(projeto2)

add_executable(
	pj2
	main.cpp
	imoveis.cpp
	imoveis.hpp
	SistemaImobiliaria.hpp
	SistemaImobiliaria.cpp
)
