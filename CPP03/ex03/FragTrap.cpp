#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "(FragTrap) Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints= 100;
	this->_attackDmgs = 30;
    std::cout << "(FragTrap) Secondary constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& src): ClapTrap(src)
{
    std::cout << "(FragTrap) Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "(FragTrap) Default destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs)
{
    std::cout << "(FragTrap) Copy assignment called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDmgs = rhs._attackDmgs;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Give me a high five!" << std::endl;
}

