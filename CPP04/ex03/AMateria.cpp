#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
    std::cout << "AMateria secondary constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& src)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    this->_type = src.getType();
}

// Destructor
AMateria::~AMateria()
{
    std::cout << "AMateria default destructor called" << std::endl;
}

// Getter
std::string const& AMateria::getType() const
{
    return this->_type;
}

// Member function
void AMateria::use(ICharacter& target)
{
    (void)target;
}