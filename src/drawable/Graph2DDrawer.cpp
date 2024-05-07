
#include "Graph2DDrawer.hpp"

#include "SDL2/SDL_render.h"
#include <SDL2/SDL.h>


void setColor(RGBColor* current_color, uint8_t r, uint8_t g, uint8_t b){
    *current_color = {.red=r, .green=g, .blue=b};
}


Graph2DDrawer::Graph2DDrawer(): axisWidth(this->defaultAxisWidth), axisLength(this->defaulAxisLength), center(this->defaultCenter){
    this->calculateAxisRect();
}


void Graph2DDrawer::setAxisWidth(int width){
    this->axisWidth = width;
}

void Graph2DDrawer::setAxisLength(int length){
    this->axisLength = length;
}

void Graph2DDrawer::moveAxisCenter(int dx, int dy){
    this->center.x += dx;
    this->center.y += dy;
}

void Graph2DDrawer::resetAxisWidth(){
    this->axisWidth = this->defaultAxisWidth;
    this->calculateAxisRect();
}

void Graph2DDrawer::resetAxisCenter() {
    this->center = this->defaultCenter;
    this->calculateAxisRect();
}

void Graph2DDrawer::resetAxisLength() {
    this->axisLength = this->defaulAxisLength;
    this->calculateAxisRect();
}

void Graph2DDrawer::resetAxis() {
    this->resetAxisCenter();
    this->resetAxisLength();
    this->resetAxisWidth();

    this->calculateAxisRect();
}


void Graph2DDrawer::setXAxisColor(uint8_t r, uint8_t g, uint8_t b) {
    setColor(&this->xAxisColor, r,g,b);
}

void Graph2DDrawer::setYAxisColor(uint8_t r, uint8_t g, uint8_t b) {
    setColor(&this->yAxisColor, r,g,b);
}


void Graph2DDrawer::calculateAxisRect() {
    this->xAxis = {
        .x = this->center.x,
        .y = this->center.y - this->axisLength,
        .w = this->axisWidth,
        .h = this->axisLength,
    };

    this->yAxis = {
        .x = this->center.x,
        .y = this->center.y - this->axisWidth,
        .w = this->axisLength,
        .h = this->axisWidth,
    };
}






void Graph2DDrawer::draw(SDL_Renderer* screen) {
    SDL_SetRenderDrawColor(screen,this->xAxisColor.red,this->xAxisColor.green,this->xAxisColor.blue, 255);
    SDL_RenderFillRect(screen, &this->xAxis);

    SDL_SetRenderDrawColor(screen,this->xAxisColor.red,this->yAxisColor.green,this->yAxisColor.blue, 255);
    SDL_RenderFillRect(screen, &this->yAxis);
}
