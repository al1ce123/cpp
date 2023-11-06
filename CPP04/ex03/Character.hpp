#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        // Constructors
        Character(std::string name);
        Character(Character const& src);

        // Destructor
        virtual ~Character();

        // Operator
        Character& operator=(Character const& rhs);

        // Member functions
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    private:
        std::string _name;
        AMateria* _inventory[4];
};