#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
    public:
        Cat();
        Cat(Cat const& src);
        virtual ~Cat();
        Cat& operator=(Cat const& rhs);

        void makeSound(void) const;

    private:
        Brain* _brain;
};
