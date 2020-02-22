#include "shape.h"
#include <sstream>

Shape::Shape()
{

}

Rectangle::Rectangle(int w, int h) : width(w), height(h)
{

}

std::string Rectangle::render()
{
    std::stringstream ss;
    ss << "<rect width=\"" << width << "\" height=\"" << height << "\" stroke=\"black\" fill=\"none\" stroke-width=\"3\"/>";
    return ss.str();
}
