#pragma once

#include <SDL2/SDL_render.h>
#include "Drawable.hpp"
#include "types.hpp"
#include <cstdint>


typedef struct {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} RGBColor;




class Graph2DDrawer: public Drawable<SDL_Renderer> {
public:
    Graph2DDrawer();


    virtual void draw(SDL_Renderer* screen) override;

    void setAxisWidth(int width);
    void resetAxisWidth();

    void setAxisLength(int length);
    void resetAxisLength();

    void moveAxisCenter(int dx, int dy);
    void resetAxisCenter();

    void resetAxis();

    void setXAxisColor(uint8_t r, uint8_t g, uint8_t b);
    void setYAxisColor(uint8_t r, uint8_t g, uint8_t b);


private:

    void calculateAxisRect();

private:


    int defaultAxisWidth = 20;
    int defaulAxisLength = 300;
    Point2D defaultCenter = {10, 500};

    int axisWidth;
    int axisLength;
    Point2D center;

    RGBColor xAxisColor = {0,255,255};
    SDL_Rect xAxis;

    RGBColor yAxisColor = {255,0,255};
    SDL_Rect yAxis;

};
