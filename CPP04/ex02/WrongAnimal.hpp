#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
    public:
        // Constructors
        WrongAnimal();
        WrongAnimal(WrongAnimal const& src);

        // Destructor
        virtual ~WrongAnimal();

        // Operator
        WrongAnimal& operator=(WrongAnimal const& rhs);

        // Getter
        std::string getType(void) const;

        // Member function
        virtual void makeSound(void) const;

    protected:
        std::string type;

    private:
};