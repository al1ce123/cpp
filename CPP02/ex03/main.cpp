#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point const a(3,1);
    Point const b(5,1);
    Point const c(4,4);
    Point const p(4,1);

    if (bsp(a,b,c,p))
        std::cout << "Inside" << std::endl;
    else
        std::cout << "Outside" << std::endl;

    return 0;
}