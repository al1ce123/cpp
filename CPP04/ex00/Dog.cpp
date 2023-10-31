#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const& src): Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const& rhs)
{
    this->type = rhs.type;
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Dogs bark" << std::endl;
}