#pragma once

#include "../screen/Screen.hpp"


class Drawable {
public:

    virtual ~Drawable(){}

    virtual void draw(Screen& screen) const = 0;
};