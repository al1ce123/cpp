#pragma once

#include <iostream>
#include <string>

class AAnimal
{
    public:
        AAnimal();
        AAnimal(AAnimal const& src);
        virtual ~AAnimal();
        AAnimal& operator=(AAnimal const& rhs);

        std::string getType(void) const;
        virtual void makeSound(void) const = 0;

    protected:
        std::string type;
};
