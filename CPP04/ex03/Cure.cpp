#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    // std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const& src) : AMateria("cure")
{
    *this = src;
}

Cure::~Cure()
{
    // std::cout << "Cure default destructor called" << std::endl;
}

Cure& Cure::operator=(Cure const& rhs)
{
    // std::cout << "Cure assignment operator called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

std::string const& Cure::getType() const
{
    return this->_type;
}

AMateria* Cure::clone() const
{
    Cure* a = new Cure();
    return a;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}