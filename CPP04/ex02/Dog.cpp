#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const& src): AAnimal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain();
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
    delete this->_brain;
}

Dog& Dog::operator=(Dog const& rhs)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = rhs.type;
    *(this->_brain) = *(rhs._brain);
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "\033[33mDogs bark\033[0m" << std::endl;
}