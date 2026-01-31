GameEngine - minimal starter

Build (PowerShell, Windows):

1. Create a build directory and configure:
   if (!(Test-Path -Path 'build')) { mkdir build }
   cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug

2. Build:
   cmake --build build --config Debug

3. Run (depending on generator):
   .\build\Debug\game_engine_app.exe   # MSVC multi-config
   .\build\game_engine_app.exe         # single-config (Ninja)

This repo contains a minimal C++17 project with a single executable `game_engine_app`.
