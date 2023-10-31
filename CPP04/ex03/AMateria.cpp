#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type): type(type)
{
    std::cout << "Secondary constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = src.type;
    *this = src;
}

AMateria::~AMateria()
{
    std::cout << "Default destructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria const& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}