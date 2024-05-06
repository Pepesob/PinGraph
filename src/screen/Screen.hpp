#pragma once


template<typename T>
class Screen {
public:
    virtual ~Screen(){};

    virtual void clear() = 0;

    virtual void display() = 0;

    virtual T* getSurface() = 0;

};