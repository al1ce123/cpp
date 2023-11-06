#include "Animal.hpp"

// Constructors
Animal::Animal(): type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const& src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

// Destructor
Animal::~Animal()
{
    std::cout << "Animal default destructor called" << std::endl;
}

// Operator
Animal& Animal::operator=(Animal const& rhs)
{
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

// Getter
std::string Animal::getType(void) const
{
    return this->type;
}

// Member function
void Animal::makeSound(void) const
{
    std::cout << "Tardigrades cant't talk..." << std::endl;
}

