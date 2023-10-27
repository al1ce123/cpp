#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const& src);
        Fixed(int const n);
        Fixed(float const n);
        ~Fixed(void);

        float toFloat(void) const;
        int toInt(void) const;

        Fixed& operator=(Fixed const& rhs);

        bool operator>(Fixed rhs) const;
        bool operator<(Fixed rhs) const;
        bool operator>=(Fixed rhs) const;
        bool operator<=(Fixed rhs) const;
        bool operator==(Fixed rhs) const;
        bool operator!=(Fixed rhs) const;

        Fixed operator+(Fixed const& rhs);
        Fixed operator-(Fixed const& rhs);
        Fixed operator*(Fixed const& rhs);
        Fixed operator/(Fixed const& rhs);

        // static Fixed& min(Fixed& fpn1, Fixed& fpn2);
        // static Fixed& min(Fixed& const fpn1, Fixed& const fpn2);
        // static Fixed& max(Fixed& fpn1, Fixed& fpn2);
        // static Fixed& max(Fixed& const fpn1, Fixed& const fpn2);

        // Fixed& Fixed::operator++(void);
        // Fixed& Fixed::operator--(void);
        // Fixed Fixed::operator++(int);
        // Fixed Fixed::operator--(int);

        int getRawBits(void) const; 
        void setRawBits(int const raw);

    private:
        int _value;
        int const _frac = 8;
};

std::ostream& operator<<(std::ostream &os, Fixed const &fixed);
