#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& src): WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& rhs)
{
    this->type = rhs.getType();
    std::cout << "WrongCat assignment operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "\033[33mCats bark!!!\033[0m" << std::endl;
}
