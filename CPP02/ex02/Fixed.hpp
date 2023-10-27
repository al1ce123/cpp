#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
    public:
    //constructors
        Fixed(void);
        Fixed(Fixed const& src);
        Fixed(int const n);
        Fixed(float const n);

    //destructors
        ~Fixed(void);

    //member functions
        float toFloat(void) const;
        int toInt(void) const;

    //operator overload
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
        static Fixed& min(Fixed& const fpn1, Fixed& const fpn2);
        static Fixed& max(Fixed& fpn1, Fixed& fpn2);
        static Fixed& max(Fixed& const fpn1, Fixed& const fpn2);

        Fixed& Fixed::operator++(void);
        Fixed& Fixed::operator--(void);
        Fixed Fixed::operator++(int);
        Fixed Fixed::operator--(int);

    //getter
        int getRawBits(void) const;

    //setter    
        void setRawBits(int const raw);

    private:
        int _value;
        int const _frac = 8;
};

std::ostream& operator<<(std::ostream &os, Fixed const &fixed);
