#include "image.h"
#include <sstream>

Image::Image()
{

}

std::string Image::render(int indentLevel)
{
    std::stringstream ss;
    for(Image* i: elements) {
        ss << indent(indentLevel+1) << i->render() << std::endl;
    }
    return ss.str();
}

void Image::add(Image* i) {
    elements.push_back(i);
}

std::string Image::indent(int indentLevel) {
    std::stringstream ss;
    for(int i=0; i< indentLevel; i++) {
        ss << "    ";
    }
    return ss.str();
}
