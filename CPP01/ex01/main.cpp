#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    
    Zombie* zombies = zombie.zombieHorde(3, "Yves");

    for (int i = 0; i < 3; ++i) {
        zombies[i].annonce();
    }

    delete[] zombies;

    return 0;
}