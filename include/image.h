#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include <vector>

class Image
{
public:
    Image();
    virtual std::string render(int indentLevel) final;
    virtual std::string render() = 0;
    void add (Image* i);

protected:
    std::vector<Image*> elements;
    std::string indent(int indentLevel);
};

#endif // IMAGE_H
