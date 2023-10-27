#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
    Zombie myZombie;

    this->name = name;
    annonce();
}
