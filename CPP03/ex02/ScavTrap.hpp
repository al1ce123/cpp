#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class ScavTrap: ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const& src);
        virtual ~ScavTrap(void);

        ScavTrap& operator=(ScavTrap const& rhs);
        void guardGate();

    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDmgs;
};

