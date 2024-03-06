#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(Dog const& src);
        virtual ~Dog();
        Dog& operator=(Dog const& rhs);
        
        virtual void makeSound(void) const;
};
