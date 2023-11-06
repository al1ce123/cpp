#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        // Constructors
        MateriaSource();
        MateriaSource(MateriaSource const& src);

        // Destructor
        virtual ~MateriaSource();

        // Operator
        MateriaSource& operator=(MateriaSource const& rhs);

        // Member functions
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
        
    private:
        AMateria* _templates[4];

};