#include "AAnimal.hpp"

AAnimal::AAnimal(): type("Animal")
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& src)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal default destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs)
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

std::string AAnimal::getType(void) const
{
    return this->type;
}

void AAnimal::makeSound(void) const
{
    std::cout << "\033[33mTardigrades cant't talk...\033[0m" << std::endl;
}
