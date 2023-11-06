#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        // Constructors
        Cat();
        Cat(Cat const& src);

        // Destructor
        virtual ~Cat();

        // Operator
        Cat& operator=(Cat const& rhs);

        // Member fonction
        void makeSound(void) const;

    protected:

    private:
};