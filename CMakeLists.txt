cmake_minimum_required(VERSION 3.10)

#project name
project(LAU VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SRC_PATH "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(INC_PATH "${CMAKE_CURRENT_SOURCE_DIR}/include")


set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/libs)


configure_file("${INC_PATH}/lauconfig.h.in" "${INC_PATH}/lauconfig.h")

add_library(LAU
            "${SRC_PATH}/vector2.cpp"
            "${SRC_PATH}/vector3.cpp"
            "${SRC_PATH}/vector4.cpp"
            "${SRC_PATH}/ivector2.cpp"
            "${SRC_PATH}/ivector3.cpp"
            "${SRC_PATH}/ivector4.cpp"
            "${SRC_PATH}/matrix2.cpp"
            "${SRC_PATH}/matrix3.cpp"
            "${SRC_PATH}/matrix4.cpp")


target_include_directories(LAU PUBLIC
                           "${INC_PATH}")
