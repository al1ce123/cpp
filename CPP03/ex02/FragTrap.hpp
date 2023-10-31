#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const& src);
        virtual ~FragTrap();

        FragTrap& operator=(FragTrap const& rhs);

        void highFivesGuys(void);

    private:
};

