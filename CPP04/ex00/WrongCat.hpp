#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        // Constructors
        WrongCat();
        WrongCat(WrongCat const& src);

        // Destructor
        virtual ~WrongCat();

        // Operator
        WrongCat& operator=(WrongCat const& rhs);

        // Member function
        void makeSound(void) const;

    protected:

    private:
};