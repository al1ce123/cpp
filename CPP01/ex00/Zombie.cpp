#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Default constructor called" << std::endl;
}

Zombie::~Zombie()
{
    if (!this->_name.empty())
        std::cout << "Default destructor called for " << this->_name << std::endl;
    else
        std::cout << "Default destructor called" << std::endl;
}

void Zombie::annonce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

