cmake_minimum_required(VERSION 3.20.0)
project(lorem-gen VERSION 0.1.0 LANGUAGES CXX)

message("Test: ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_CXX_EXTENSIONS)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif()

add_compile_options(
    -std=c++20
    -Werror
    -pedantic-errors
    -Wall
    -Wextra
    -Wpedantic
    -Wcast-align
    -Wcast-qual
    -Wconversion
    -Wctor-dtor-privacy
    -Wduplicated-branches
    -Wduplicated-cond
    -Wextra-semi
    -Wfloat-equal
    -Wlogical-op
    -Wnon-virtual-dtor
    -Wold-style-cast
    -Woverloaded-virtual
    -Wredundant-decls
    -Wsign-conversion
    -Wsign-promo
    -Wshadow
    -Wformat=2
    -Wundef
    -Wswitch-default
    -Wswitch-enum
)

file(GLOB source_folder CONFIGURE_DEPENDS "source/*.cpp")

add_executable(lorem-gen main.cpp ${source_folder})

target_include_directories(lorem-gen PUBLIC "${PROJECT_SOURCE_DIR}/include")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
