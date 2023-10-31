#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap robot;

    robot.attack("random target");
    robot.takeDamage(42);
    robot.beRepaired(21);
    robot.highFivesGuys();

    return 0;
}