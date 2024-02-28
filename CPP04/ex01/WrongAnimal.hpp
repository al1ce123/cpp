#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const& src);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal const& rhs);

        std::string getType(void) const;
        void makeSound(void) const;

    protected:
        std::string type;
};
