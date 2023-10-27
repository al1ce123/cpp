#pragma once

#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const& src);
        virtual ~Fixed(void);

        Fixed& operator=(Fixed const& rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _value;
        int const _frac = 8;
};
