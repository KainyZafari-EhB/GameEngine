//
// Created by kainy on 2/4/2026.
//

#ifndef GAMEENGINE_ENGINE_H
#define GAMEENGINE_ENGINE_H
#include <bits/basic_string.h>

#include "SDL3/SDL_events.h"

//Engine bezit een window
class Engine {
public:
    //vraagt input aan window (via poll?)
    void run();

    //update de bewegingen
    void update();

    //sluit de engine af
    void shutdown();

    //chaining van window commands bv paint en daarna pas present
    void draw(std::string color);
private:
    bool isRunning = true;
    SDL_Event event;
};


#endif //GAMEENGINE_ENGINE_H