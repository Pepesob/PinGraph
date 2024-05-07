#include "SDLScreen.hpp"

#include <stdexcept>
#include <SDL2/SDL.h>



SDLScreen::SDLScreen(int window_width, int window_height): window_width(window_width), window_height(window_height){
    this->init();
}

SDLScreen::~SDLScreen(){
    this->cleanUp();
}

void SDLScreen::cleanUp() {
    if (this->window != nullptr) SDL_DestroyWindow(this->window);
    if (this->renderer != nullptr) SDL_DestroyRenderer(this->renderer);
}


void SDLScreen::clear() {
    SDL_SetRenderDrawColor(this->renderer, 96, 128, 255, 255);
    SDL_RenderClear(this->renderer);
}



void SDLScreen::display() {
    SDL_RenderPresent(this->renderer);
}

SDL_Renderer *SDLScreen::getSurface()
{
    return this->renderer;
}

void SDLScreen::init() {
    int rendererFlags, windowFlags;

    rendererFlags = SDL_RENDERER_ACCELERATED;

    windowFlags = 0;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        throw std::runtime_error(SDL_GetError());
    }

    this->window = SDL_CreateWindow("Shooter 01", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, this->window_width, this->window_height, windowFlags);

    if (this->window == nullptr)
    {
        throw std::runtime_error(SDL_GetError());
    }

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

    this->renderer = SDL_CreateRenderer(this->window, -1, rendererFlags);

    if (this->renderer == nullptr)
    {
        throw std::runtime_error(SDL_GetError());
    }
}

void SDLScreen::pollEvents(){
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT:
                exit(0);
                break;

            default:
                break;
        }
    }
}
