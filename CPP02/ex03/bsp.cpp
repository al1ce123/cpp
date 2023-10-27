#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float t1 = (((c.getX().toFloat() - point.getX().toFloat()) * (a.getY().toFloat() - point.getY().toFloat())) - ((c.getY().toFloat() - point.getY().toFloat()) * (a.getX().toFloat() - point.getX().toFloat())));
    float t2 = (((a.getX().toFloat() - point.getX().toFloat()) * (b.getY().toFloat() - point.getY().toFloat())) - ((a.getY().toFloat() - point.getY().toFloat()) * (b.getX().toFloat() - point.getX().toFloat())));
    float t3 = (((b.getX().toFloat() - point.getX().toFloat()) * (c.getY().toFloat() - point.getY().toFloat())) - ((b.getY().toFloat() - point.getY().toFloat()) * (c.getX().toFloat() - point.getX().toFloat())));

    if ((t1 < 0) && (t2 < 0) && (t3 < 0))
        return true;
    else
        return false;
}

