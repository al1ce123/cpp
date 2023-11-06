#include "WrongAnimal.hpp"


// Constructors
WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor called" << std::endl;
}

// Operator
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
    this->type = rhs.getType();
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    return *this;
}

// Getter
std::string WrongAnimal::getType(void) const
{
    return this->type;
}

// Member function
void WrongAnimal::makeSound(void) const
{
    std::cout << "Toads cant't talk..." << std::endl;
}

