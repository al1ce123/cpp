#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

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

        // Member function
        void makeSound(void) const;

    protected:

    private:
        Brain* _brain;
};