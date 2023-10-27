#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const& src);
        virtual ~FragTrap(void);

        FragTrap& operator=(FragTrap const& rhs);
        void highFivesGuys(void);

    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDmgs;
};

