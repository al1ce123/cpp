#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

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

// Insertion operator overload
std::ostream& operator<<(std::ostream& os, const Intern& rhs);
