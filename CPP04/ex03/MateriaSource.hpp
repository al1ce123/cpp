#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const& src);
        virtual ~MateriaSource();
        MateriaSource& operator=(MateriaSource const& rhs);

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const& type);
        
    private:
        AMateria* _templates[4];
};
