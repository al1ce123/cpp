#pragma once

#include <iostream>
#include <string>

class Brain
{
    public:
        Brain();
        Brain(Brain const& src);
        virtual ~Brain();
        Brain& operator=(Brain const& rhs);

    private:
        std::string ideas[100];
};
