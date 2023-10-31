#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y): _x(x), _y(y)
{
    // std::cout << "Secondary constructor called" << std::endl;
}

Point::Point(Point const& p): _x(p.getX()), _y(p.getY())
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = p;
}

Point& Point::operator=(Point const& rhs)
{
    // std::cout << "Copy assignment operator overload called" << std::endl;
    (void)rhs;
    return *this;
}

Point::~Point()
{
    // std::cout << "Default destructor called" << std::endl;
}

Fixed const& Point::getX(void) const
{
    return this->_x;
}

Fixed const& Point::getY(void) const
{
    return this->_y;
}