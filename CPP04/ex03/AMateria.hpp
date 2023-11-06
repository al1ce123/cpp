#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        // Constructors
        AMateria();
        AMateria(std::string const& type);
        AMateria(AMateria const& src);

        // Destructor
        virtual ~AMateria();

        // Getter
        std::string const& getType() const;

        // Member function
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
    
    protected:
        std::string _type;

    private:
};