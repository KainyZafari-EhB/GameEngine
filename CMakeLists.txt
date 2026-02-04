cmake_minimum_required(VERSION 3.16)
project(GameEngine VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Zeg tegen SDL3 dat we geen extra features nodig hebben die we niet gebruiken
set(SDL_SHARED ON CACHE BOOL "" FORCE)
set(SDL_STATIC OFF CACHE BOOL "" FORCE)

# 2. Voeg de SDL3 map toe als onderdeel van de bouw-instructies
# Dit zorgt ervoor dat SDL3 'onderdeel' wordt van jouw project
add_subdirectory(external/SDL3)

# 3. Je eigen executable maken
add_executable(game_engine_app src/main.cpp)

# 4. Linken met de SDL3 TARGET
# Je hoeft nu geen paden meer op te geven!
# CMake weet door 'add_subdirectory' nu wat 'SDL3::SDL3' is.
target_link_libraries(game_engine_app PRIVATE SDL3::SDL3)

# 2. Vertel je app waar de headers staan
# Bij SDL3 uit de broncode staan de headers vaak in de 'include' submap
target_include_directories(game_engine_app PRIVATE
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/external/SDL3/include
)
# Kopieer de SDL3 DLL automatisch naar de plek van de .exe
add_custom_command(TARGET game_engine_app POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:SDL3::SDL3>"
        "$<TARGET_FILE_DIR:game_engine_app>"
)