//
// Created by kainy on 2/4/2026.
//

#include "Window.h"

#include <memory>


void Window::init() {
    window = SDL_CreateWindow("Test Window", width, height, SDL_WINDOW_RESIZABLE);
    renderer = SDL_CreateRenderer(window, nullptr);
    if (!window) {
        std::cerr << "Could not create window: " << SDL_GetError() << std::endl;
    }
    if (!renderer) std::cerr << "Could not create renderer: " << SDL_GetError() << std::endl;
}

void Window::cleanup() const {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}

void Window::paint(const std::string& color) {
    if (color == "green") {
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderClear(renderer);
    }
    if (color == "blue") {
        SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
        SDL_RenderClear(renderer);
    }
    if (color == "red") {
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderClear(renderer);
    }
    SDL_RenderPresent(renderer);
}

void Window::present() {
    if (window) {
        std::cerr << "window present" << std::endl;
    }
    if (renderer) {
        std::cerr << "renderer present" << std::endl;
    }
}
