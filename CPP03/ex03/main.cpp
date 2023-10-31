#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap robot;

    robot.whoAmI();
    robot.attack("random target");
    robot.takeDamage(42);
    robot.beRepaired(21);
    robot.guardGate();
    robot.highFivesGuys();
    return 0;
}