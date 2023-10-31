#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(Dog const& src);
        virtual ~Dog();

        Dog& operator=(Dog const& rhs);

        void makeSound(void) const;

    protected:

    private:
        Brain* _brain;
};