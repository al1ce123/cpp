#include "Cat.hpp"

// Constructors
Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const& src): Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

// Destructor
Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
}

// Operator
Cat& Cat::operator=(Cat const& rhs)
{
    this->type = rhs.getType();
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

// Member fonction
void Cat::makeSound(void) const
{
    std::cout << "Cats meow" << std::endl;
}