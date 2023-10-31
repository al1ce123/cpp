#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("R2-D2");
    ClapTrap robot2(robot);
    ClapTrap robot3("C-3PO");

    std::cout << robot.getName()<< std::endl;
    std::cout << robot2.getName() << std::endl;
    robot3 = robot2;
    std::cout << robot3.getName() << std::endl;

    robot.attack("Darth Vader");
    robot.takeDamage(9);
    robot.beRepaired(4);

    return 0;
}