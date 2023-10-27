#include "ClapTrap.hpp"

int main()
{
    ClapTrap cp("Superman");

    cp.attack("Zod");
    cp.takeDamage(9);
    cp.beRepaired(4);

    return 0;
}