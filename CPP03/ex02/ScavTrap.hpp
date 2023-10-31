#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const& src);
        virtual ~ScavTrap();

        ScavTrap& operator=(ScavTrap const& rhs);

        void guardGate(void);
        void attack(const std::string& target);

    private:
};
