#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie* newZombie = new Zombie;
    this->name = name;
    
    return newZombie;
}
