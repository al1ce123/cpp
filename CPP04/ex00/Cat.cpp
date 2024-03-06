#include "Cat.hpp"

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

Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const& rhs)
{
    this->type = rhs.getType();
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "\033[33mCats meow\033[0m" << std::endl;
}
