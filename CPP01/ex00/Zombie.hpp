#pragma once

#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void annonce(void);
        Zombie* newZombie(std::string name);
        void randomChump(std::string name);

    private:
        std::string _name;
};