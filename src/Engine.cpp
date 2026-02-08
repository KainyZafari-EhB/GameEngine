//
// Created by kainy on 2/4/2026.
//

#include "Engine.h"

#include "Window.h"

Window window;

//moet een command binnen krijgen om uit te voeren
void Engine::run() {
    while (isRunning) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                isRunning = false;
            }
        }
    //moet de commands hier uitvoeren
    }
}

void Engine::update() {

}

void Engine::shutdown() {
    window.cleanup();
}

void Engine::draw(std::string color) {
    if (!window.window || !window.renderer) {
        window.init();
    }
    window.paint(color);
}