#pragma once

#include <iostream>
#include <string>

class Animal
{
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const& src);
        virtual ~Animal();

        Animal& operator=(Animal const& rhs);

        virtual void makeSound(void) const = 0;
        std::string getType(void) const;

    protected:
        std::string type;

    private:
};