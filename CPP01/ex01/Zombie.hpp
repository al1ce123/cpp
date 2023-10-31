#pragma once

#include <iostream>

class Zombie
{
    public:
        void annonce(void);
        Zombie* zombieHorde(int N, std::string name);

    private:
        std::string _name;
};
