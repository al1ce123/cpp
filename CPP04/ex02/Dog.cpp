#include "Dog.hpp"

// Constructors
Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const& src): Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain();
    *this = src;
}

// Dstructor
Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
    delete this->_brain;
}

// Operator
Dog& Dog::operator=(Dog const& rhs)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = rhs.type;
    *(this->_brain) = *(rhs._brain);
    return *this;
}

// Member function
void Dog::makeSound(void) const
{
    std::cout << "Dogs bark" << std::endl;
}