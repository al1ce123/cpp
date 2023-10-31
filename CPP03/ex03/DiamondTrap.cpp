#include "DiamondTrap.hpp"

//constructors & destructors
DiamondTrap::DiamondTrap(): ClapTrap()
{
    std::cout << "(DiamondTrap) default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap")
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDmgs = FragTrap::_attackDmgs;
    std::cout << "(DiamondTrap) secondary constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDmgs = src._attackDmgs;
    std::cout << "(DiamonTrap) copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "(DiamonTrap) default destructor called" << std::endl;
}

//overloaded operators
DiamondTrap& DiamondTrap::operator=(DiamondTrap const& rhs)
{
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDmgs = rhs._attackDmgs;
    return *this;
}

//member functions
void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->_name << " and i come from " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

