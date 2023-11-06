#include "MateriaSource.hpp"
#include "AMateria.hpp"

// Constructors
MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_templates[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_templates[i])
            this->_templates[i] = src._templates[i]->clone();
    }
}

// Destructor
MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource default destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete this->_templates[i];
        this->_templates[i] = 0;
    }
}

// Operator
MateriaSource& MateriaSource::operator=(MateriaSource const& rhs)
{
    std::cout << "MateriaSource assignment operator called" << std::endl;
    if(this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_templates[i])
                this->_templates[i] = rhs._templates[i]->clone();
        }
    }
    return *this;
}

// Member functions
void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    for (; i < 4 && this->_templates[i] != 0; i++);
    if (i < 4)
        this->_templates[i] = m; // Intentional shallow copy
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
    {
		if (this->_templates[i] != 0 && this->_templates[i]->getType() == type)
				return (this->_templates[i]->clone());
    }
	return 0;
}