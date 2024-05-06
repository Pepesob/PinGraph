#pragma once

template<typename T>
class Drawable {
public:

    virtual ~Drawable(){}

    virtual void draw(T* screen) const = 0;
};