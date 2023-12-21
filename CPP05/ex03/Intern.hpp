#pragma once

#include "AForm.hpp"

class Intern {
public:
    // Constructors
    Intern();
    Intern(const Intern& src);

    // Destructor
    virtual ~Intern();

    // Copy assignment operator overload
    Intern& operator=(const Intern& rhs);

    // Member function
    AForm* makeForm(std::string name, std::string target);
};