#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        // Constructors
        Dog();
        Dog(Dog const& src);

        // Destructor
        virtual ~Dog();

        // Operator
        Dog& operator=(Dog const& rhs);

        // Member function
        void makeSound(void) const;

    protected:

    private:
};