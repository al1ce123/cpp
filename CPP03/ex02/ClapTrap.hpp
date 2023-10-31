#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const& src);
        virtual ~ClapTrap();

        ClapTrap& operator=(ClapTrap const& rhs);

        std::string getName(void) const;
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDmgs;
};
