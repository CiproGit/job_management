cmake_minimum_required(VERSION 3.5)

project(job_management LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt6 COMPONENTS Core REQUIRED)

include_directories(include)

file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS include/*.h)

add_executable(job_management ${SOURCES} ${HEADERS})
target_link_libraries(job_management Qt6::Core)
