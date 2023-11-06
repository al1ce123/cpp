#pragma once

#include <iostream>
#include <string>

class Animal
{
    public:
        // Constructors
        Animal();
        Animal(Animal const& src);

        // Destructor
        virtual ~Animal();

        // Operator
        Animal& operator=(Animal const& rhs);

        // Getter
        std::string getType(void) const;

        // Member function
        virtual void makeSound(void) const;

    protected:
        std::string type;

    private:
};