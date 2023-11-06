#include "Cat.hpp"

// Constructors
Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(Cat const& src): Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brain = new Brain();
    *this = src;
}

// Destructor
Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
    delete this->_brain;
}

// Operator
Cat& Cat::operator=(Cat const& rhs)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = rhs.type;
    *(this->_brain) = *(rhs._brain);
    return *this;
}

// Member function
void Cat::makeSound(void) const
{
    std::cout << "Cats meow" << std::endl;
}