#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    
    Zombie* z1 = zombie.newZombie("Rudolphe");
    Zombie* z2 = zombie.newZombie("Alphonse");

    // zombie.randomChump("Alphonse");
    // zombie.randomChump("Alexandre");
    // zombie.randomChump("Alice");

    delete z1;
    delete z2;

    return 0;
}