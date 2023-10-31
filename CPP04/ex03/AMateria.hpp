#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
    public:
        AMateria();
        AMateria(std::string const& type);
        virtual ~AMateria();

        std::string const& getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
    
    protected:
        std::string type;

};