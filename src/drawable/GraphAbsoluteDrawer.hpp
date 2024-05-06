#pragma once
#include "../graph/GraphAbsolute.hpp"
#include "../screen/Screen.hpp"
#include "../drawable/Drawable.hpp"
#include <SDL2/SDL_video.h>


class GraphAbsoluteDrawer: public Drawable<SDL_Window> {
public:
    GraphAbsoluteDrawer(GraphAbsolute& graph);
    
    
private:

    GraphAbsolute& graph;
};