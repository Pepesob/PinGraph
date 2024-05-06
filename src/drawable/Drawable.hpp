#pragma once

#include "../screen/Screen.hpp"

template<typename T>
class Drawable {
public:

    virtual ~Drawable(){}

    virtual void draw(T* screen) const = 0;
};