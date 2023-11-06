#include "WrongCat.hpp"


// Conctructors
WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& src): WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

// Destructor
WrongCat::~WrongCat()
{
    std::cout << "WrongCat default destructor called" << std::endl;
}


// Operator
WrongCat& WrongCat::operator=(WrongCat const& rhs)
{
    this->type = rhs.getType();
    std::cout << "WrongCat assignment operator called" << std::endl;
    return *this;
}

// Member function
void WrongCat::makeSound(void) const
{
    std::cout << "Cats bark!!!" << std::endl;
}