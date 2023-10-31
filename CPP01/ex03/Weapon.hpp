#pragma once

#include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        virtual ~Weapon();

        const std::string& getType() const;
        void setType(std::string type);

    private:
        std::string _type;
};