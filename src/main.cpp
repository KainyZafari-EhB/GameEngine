#include <iostream>
#include <SDL3/SDL.h>

#include "Engine.h"
#include "Window.h"


int main() {
    Window window;
    Engine engine;

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return -1;
    }
    window.init();
    window.present();

    engine.run();

    // bool isRunning = true;
    // SDL_Event event;
    //
    // while (isRunning) {
    //     while (SDL_PollEvent(&event)) {
    //         if (event.type == SDL_EVENT_QUIT) {
    //             isRunning = false;
    //         }
    //     }
    //     window.paint("red");
    // }

    window.cleanup();

    return 0;
}
