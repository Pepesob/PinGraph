#pragma once
#include "../graph/GraphAbsolute.hpp"
#include "../screen/Screen.hpp"
#include "../drawer/Drawable.hpp"


class GraphAbsoluteDrawer: public Drawable {
public:
    GraphAbsoluteDrawer(GraphAbsolute& graph);
    
    
private:

    GraphAbsolute& graph;
};