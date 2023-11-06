#include "Dog.hpp"

// Constructors
Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const& src): Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

// Destructor
Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
}

// Operator
Dog& Dog::operator=(Dog const& rhs)
{
    this->type = rhs.getType();
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

// Member function
void Dog::makeSound(void) const
{
    std::cout << "Dogs bark" << std::endl;
}