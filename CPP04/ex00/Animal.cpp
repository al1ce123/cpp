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
    this->type = rhs.type;
    std::cout << "Animal assignment operator called" << std::endl;
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
