#pragma once

#include "Animal.hpp"

class Cat: public Animal {
    public:
        Cat();
        Cat(Cat const& src);
        virtual ~Cat();

        Cat& operator=(Cat const& rhs);
        virtual void makeSound(void) const;
};
