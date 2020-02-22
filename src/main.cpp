#include <iostream>
#include <svg.h>
#include <shape.h>

using namespace std;

int main()
{
    SVG svg(100, 100);
    Rectangle rectangle(45, 53);
    svg.add(&rectangle);
    cout << svg.render() << endl;
    return 0;
}
