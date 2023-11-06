#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        // Constructors
        Ice();
        Ice(Ice const& src);

        // Destructor
        virtual ~Ice();

        // Operator
        Ice& operator=(Ice const& rhs);

        // Getter
        std::string const& getType() const;

        // Member functions
        AMateria* clone() const;
        void use(ICharacter& target);

    protected:

    private:
};