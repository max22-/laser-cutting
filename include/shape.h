#ifndef SHAPE_H
#define SHAPE_H

#include "image.h"

class Shape : public Image
{
public:
    Shape();
};

class Rectangle : public Shape
{
public:
    Rectangle(int w, int h);
    std::string render();

private:
    int width, height;
};

#endif // SHAPE_H
