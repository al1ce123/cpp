#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal secondary constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
    this->type = rhs.type;
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Toads cant't talk..." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}