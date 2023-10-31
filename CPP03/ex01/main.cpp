#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap robot;
    ScavTrap robot2;

    robot.attack("random target");

    robot2.attack("random target");
    robot2.takeDamage(42);
    robot2.beRepaired(21);
    robot2.guardGate();
    
    return 0;
}