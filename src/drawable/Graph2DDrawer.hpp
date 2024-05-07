#pragma once

#include <SDL2/SDL_render.h>
#include "Drawable.hpp"
#include "../types.hpp"


typedef struct {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} RGBColor;




class Graph2DDrawer: public Drawable<SDL_Renderer> {
public:
    virtual void draw(SDL_Renderer* screen) override;

private:
    ScreenPoint xAxisPoint1 = {10,10};
    ScreenPoint xAxisPoint2 = {20,20};
    RGBColor xAxisColor = {0,255,255};

    ScreenPoint yAxisPoint1 = {50,10};
    ScreenPoint yAxisPoint2 = {50,20};
    RGBColor yAxisColor = {255,0,255};
};
