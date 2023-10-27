#pragma once

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const& src);
        virtual ~ClapTrap(void);

        ClapTrap& operator=(ClapTrap const& rhs);

        //getter
        std::string getName(void) const;

        //setter
        void setHitPoints(int n);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDmgs;
};
