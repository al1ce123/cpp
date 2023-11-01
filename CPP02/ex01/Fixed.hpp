#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(int const n);
        Fixed(float const f);
        Fixed(Fixed const& src);
        virtual ~Fixed(void);

        float toFloat(void) const;
        int toInt(void) const;

        Fixed& operator=(Fixed const& rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _value;
        static int const _frac = 8;
};

std::ostream& operator<<(std::ostream &os, Fixed const &fixed);
