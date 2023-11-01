#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
public:

    Fixed(void);
    Fixed(Fixed const& src);
    Fixed(int const n);
    Fixed(float const n);

    virtual ~Fixed(void);

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

    static Fixed& min(Fixed& fpn1, Fixed& fpn2);
    static Fixed const& min(Fixed const& fpn1, Fixed const& fpn2);
    static Fixed& max(Fixed& fpn1, Fixed& fpn2);
    static Fixed const& max(Fixed const& fpn1, Fixed const& fpn2);

    Fixed& operator++(void);
    Fixed& operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    int getRawBits(void) const; 
    void setRawBits(int const raw);

private:
    int _value;
    static int const _frac = 8;
};

std::ostream& operator<<(std::ostream &os, Fixed const &fixed);
