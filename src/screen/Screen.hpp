#pragma once
#include "../drawer/Drawable.hpp"


class Screen {
public:
    virtual ~Screen(){};

    virtual void clear() = 0;

    virtual void display() = 0;

    virtual void render(Drawable& object) = 0;

};