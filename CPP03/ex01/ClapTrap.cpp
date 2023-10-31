#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDmgs(0)
{
    std::cout << "Second constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this ->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDmgs = rhs._attackDmgs;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
        std::cout << "Cant't attack. No energy points left..." << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmgs <<  " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "Already dead" << std::endl;
        return;
    }
    std::cout << "It hurts!" << std::endl;
    this->_hitPoints-=amount;
    if (this->_hitPoints <= 0)
        std::cout << "You killed him" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0)
        std::cout << "Cant't repaire. No energy points left..." << std::endl;
    else if (this->_hitPoints <= 0)
        std::cout << "It's dead, there is nothing to repaire..." << std::endl;
    else
    {
        std::cout << "Repairing..." << std::endl;
        this->_hitPoints+=amount;
        this->_energyPoints--;
    }
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}