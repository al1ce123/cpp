#pragma once

#include <iostream>
#include <string>

class Brain
{
    public:
        // Constructors
        Brain();
        Brain(Brain const& src);

        // Destructor
        virtual ~Brain();

        // Operator
        Brain& operator=(Brain const& rhs);

    protected:

    private:
        std::string ideas[100];
};