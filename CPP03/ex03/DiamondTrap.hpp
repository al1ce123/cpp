#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const& src);
        virtual ~DiamondTrap();

        DiamondTrap& operator=(DiamondTrap const& rhs);

        void whoAmI();
        void attack(const std::string& target);

    private:
        std::string _name;
};
