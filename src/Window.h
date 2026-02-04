//
// Created by kainy on 2/4/2026.
//

#ifndef GAMEENGINE_WINDOW_H
#define GAMEENGINE_WINDOW_H
#include <iostream>

#include "SDL3/SDL_init.h"
#include "SDL3/SDL_render.h"
#include "SDL3/SDL_video.h"


class Window {
public:
    SDL_Window *window;
    SDL_Renderer *renderer;
    int width, height;

    //initialiseer
    void init(const std::string& name);

    //destroy renderer en window
    void cleanup();

    //schildert het scherm met een kleur
    void paint();

    //toont wat er op het scherm aanwezig is
    void present();
};

#endif //GAMEENGINE_WINDOW_H