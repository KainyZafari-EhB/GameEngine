cmake_minimum_required(VERSION 3.16)
project(GameEngine VERSION 0.1 LANGUAGES CXX)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable from single source for now
add_executable(game_engine_app src/main.cpp)

target_include_directories(game_engine_app PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Sensible warning levels
if (MSVC)
    target_compile_options(game_engine_app PRIVATE /W4 /permissive-)
else()
    target_compile_options(game_engine_app PRIVATE -Wall -Wextra -Wpedantic)
endif()
