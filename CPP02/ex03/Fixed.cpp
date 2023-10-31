#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed(void): _value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int const n)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_value = n << this->_frac;

}

Fixed::Fixed(float const n)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(n * (1 << this->_frac));
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return *this;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (float)(1 << this->_frac));
}

int Fixed::toInt(void) const
{
    return this->_value >> this->_frac;
}

std::ostream& operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(Fixed rhs) const
{
    return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator<(Fixed rhs) const
{
    return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>=(Fixed rhs) const
{
    return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(Fixed rhs) const
{
    return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator==(Fixed rhs) const
{
    return this->toFloat() == rhs.toFloat();
}   

bool Fixed::operator!=(Fixed rhs) const
{
    return this->toFloat() + rhs.toFloat();
}

Fixed Fixed::operator+(Fixed const& rhs)
{
    return this->toFloat() + rhs.toFloat();
}

Fixed Fixed::operator-(Fixed const& rhs)
{
    return this->toFloat() - rhs.toFloat();
}

Fixed Fixed::operator*(Fixed const& rhs)
{
    return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/(Fixed const& rhs)
{
    return this->toFloat() / rhs.toFloat();
}

// static Fixed& min(Fixed& fpn1, Fixed& fpn2)
// {
//     if (fpn1.toFloat() <= fpn2.toFloat())
//         return fpn1;
//     else
//         return fpn2;
// }

// static Fixed& min(Fixed& const fpn1, Fixed& const fpn2)
// {
//     if (fpn1.toFloat() <= fpn2.toFloat())
//         return fpn1;
//     else
//         return fpn2;
// }

// static Fixed& max(Fixed& fpn1, Fixed& fpn2)
// {
//     if (fpn1.toFloat() >= fpn2.toFloat())
//         return fpn1;
//     else
//         return fpn2;
// }

// static Fixed& max(Fixed& const fpn1, Fixed& const fpn2)
// {
//     if (fpn1.toFloat() >= fpn2.toFloat())
//         return fpn1;
//     else
//         return fpn2;
// }

// //pre
// Fixed& Fixed::operator++(void)
// {
// 	this->_value += 1;
// 	return (*this);
// }

// Fixed& Fixed::operator--(void)
// {
// 	this->_value -= 1;
// 	return (*this);
// }

// //post
// Fixed Fixed::operator++(int)
// {
// 	Fixed	temp = *this;

// 	(this->_value) +=1 ;
// 	return (temp);
// }

// Fixed Fixed::operator--(int)
// {
// 	Fixed	temp = *this;

// 	(this->_value) -=1 ;
// 	return (temp);
// }





