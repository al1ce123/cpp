#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const& src);
        virtual ~WrongAnimal();

        WrongAnimal& operator=(WrongAnimal const& rhs);

        virtual void makeSound(void) const;
        std::string getType(void) const;

    protected:
        std::string type;

    private:
};