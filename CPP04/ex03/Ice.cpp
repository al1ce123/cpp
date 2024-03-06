#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const& src) : AMateria("ice")
{
    *this = src;
}

Ice::~Ice() {
    std::cout << "Ice default destructor called" << std::endl;
}

Ice& Ice::operator=(Ice const& rhs)
{
    std::cout << "Ice assignment operator called" << std::endl;
    this->_type = rhs.getType();
    return *this;
}

std::string const& Ice::getType() const
{
    return this->_type;
}

AMateria* Ice::clone() const {
    Ice* a = new Ice();
    return a;
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}