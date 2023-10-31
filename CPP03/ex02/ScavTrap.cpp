#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints= 50;
	this->_attackDmgs= 20;
    std::cout << "(ScavTrap) Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmgs = 20;
    std::cout << "(ScavTrap) Secondary constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src): ClapTrap(src)
{
    std::cout << "(ScavTrap) Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "(ScavTrap) Default destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
{
    std::cout << "(ScavTrap) Copy assignment called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDmgs = rhs._attackDmgs;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
        std::cout << "Cant't attack. No energy points left..." << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmgs <<  " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << "Gate keeper mode enable" << std::endl;
}