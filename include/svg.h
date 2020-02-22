#ifndef SVG_H
#define SVG_H

#include <image.h>


class SVG : public Image
{
public:
    SVG(int w, int h);
    std::string render();

private:
    int width, height;
};

#endif // SVG_H
