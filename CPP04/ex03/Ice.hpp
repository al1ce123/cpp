#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const& src);
        virtual ~Ice();
        Ice& operator=(Ice const& rhs);

        std::string const& getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);
};