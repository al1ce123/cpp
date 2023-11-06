#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        // Constructors
        Cure();
        Cure(Cure const& src);

        // Destructor
        virtual ~Cure();

        // Operator
        Cure& operator=(Cure const& rhs);

        // Getter
        std::string const & getType() const;

        // Member functions
        AMateria* clone() const;
        void use(ICharacter& target);

    protected:
    
    private:
};