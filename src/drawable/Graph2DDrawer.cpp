
#include "Graph2DDrawer.hpp"

#include "SDL2/SDL_render.h"

void Graph2DDrawer::draw(SDL_Renderer* screen) {
    SDL_SetRenderDrawColor(screen,this->xAxisColor.red,this->xAxisColor.green,this->xAxisColor.blue, 255);
    SDL_RenderDrawLine(screen, this->xAxisPoint1.x, this->xAxisPoint1.y, this->xAxisPoint2.x, this->xAxisPoint2.y);

    SDL_SetRenderDrawColor(screen,this->xAxisColor.red,this->yAxisColor.green,this->yAxisColor.blue, 255);
    SDL_RenderDrawLine(screen, this->yAxisPoint1.x, this->yAxisPoint1.y, this->yAxisPoint2.x, this->yAxisPoint2.y);
}
