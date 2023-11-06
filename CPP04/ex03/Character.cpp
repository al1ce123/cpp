#include "Character.hpp"

// Constructors
Character::Character(std::string name) : _name(name)
{
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character::Character(Character const& src) : _name(src.getName())
{
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = 0;
    }
}

// Destructor
Character::~Character()
{
    std::cout << "Character default destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
        this->_inventory[i] = 0;
    }
}

// Operator
Character& Character::operator=(Character const& rhs)
{
    std::cout << "Character assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
        {
            delete this->_inventory[i];
            if (rhs._inventory[i])
                this->_inventory[i] = rhs._inventory[i]->clone();
            else
                this->_inventory[i] = 0;
        }
    }
    return *this;
}

// Getter
std::string const& Character::getName() const
{
    return this->_name;
}

// Member functions
void Character::equip(AMateria* m)
{
    int i = 0;
    for (; i < 4 && this->_inventory[i] != 0; i++);
    if (i < 4)
        this->_inventory[i] = m; // Intentional shallow copy
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
        this->_inventory[idx]->use(target);
}