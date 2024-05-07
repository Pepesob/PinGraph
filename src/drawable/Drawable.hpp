#pragma once

template<typename T>
class Drawable {
public:

    virtual ~Drawable(){}

    virtual void draw(T* screen) = 0;
};