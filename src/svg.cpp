#include "svg.h"
#include <sstream>

SVG::SVG(int w, int h) : width(w), height(h)
{

}

std::string SVG::render() {
    std::stringstream ss;
    ss << "<svg width=\"" << width << "mm\" height=\"" << height << "mm\">" << std::endl;
    ss << Image::render(0);
    ss << "</svg>";
    return ss.str();
}
