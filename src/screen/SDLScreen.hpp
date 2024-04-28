#pragma once

#include "Screen.hpp"

#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>


class SDLScreen: public Screen {

public:
    SDLScreen(int window_width, int window_height);

    virtual void clear() override;

    virtual void render(Drawable& object) override;

    virtual void display() override;

private:

    void init();


private:
    int window_width = 540;
    int window_height = 360;
    
    SDL_Renderer* renderer = nullptr;
    SDL_Window* window = nullptr;

};