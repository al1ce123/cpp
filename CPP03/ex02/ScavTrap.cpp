#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "(ScavTrap) Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100), _energyPoints(50), _attackDmgs(20)
{
    std::cout << "(ScavTrap) Secondary constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
    std::cout << "(ScavTrap) Copy constructor called" << std::endl;
    *this = src;
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
}

void ScavTrap::guardGate()
{
    std::cout << "Gate keeper mode enable" << std::endl;
}