#include "Cat.hpp"

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

Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
    delete this->_brain;
}

Cat& Cat::operator=(Cat const& rhs)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = rhs.type;
    *(this->_brain) = *(rhs._brain);
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "\033[33mCats meow\033[0m" << std::endl;
}