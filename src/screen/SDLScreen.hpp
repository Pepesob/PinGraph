#pragma once

#include "Screen.hpp"

#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>


class SDLScreen: public Screen<SDL_Renderer> {

public:
    SDLScreen(int window_width, int window_height);

    virtual void clear() override;

    virtual void display() override;

    virtual SDL_Renderer* getSurface() override;

private:

    void init();


private:
    int window_width = 540;
    int window_height = 360;
    
    SDL_Renderer* renderer = nullptr;
    SDL_Window* window = nullptr;

};