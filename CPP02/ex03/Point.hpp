#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point
{
    public:
        Point();
        virtual ~Point();

        Point(float const x, float const y);
        Point(Point const& p);
        Point& operator=(Point const& rhs);

        Fixed const& getX(void) const;
        Fixed const& getY(void) const;

    private:
        Fixed const _x;
        Fixed const _y;
};