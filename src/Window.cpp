//
// Created by kainy on 2/4/2026.
//

#include "Window.h"

void Window::init(const std::string& name) {
    window = SDL_CreateWindow(name.c_str(), width, height, SDL_WINDOW_RESIZABLE);
    renderer = SDL_CreateRenderer(window, nullptr);
    if (!window) {
        std::cerr << "Could not create window: " << SDL_GetError() << std::endl;
    }
    if (!renderer) std::cerr << "Could not create renderer: " << SDL_GetError() << std::endl;
}

void Window::cleanup() {

}

void Window::paint() {

}

void Window::present() {

}
