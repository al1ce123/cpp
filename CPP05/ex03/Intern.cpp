#include "Intern.hpp"

// Constructors
Intern::Intern() {}

Intern::Intern(const Intern& src) {
    *this = src;
}

// Assignment operator overload
Intern& Intern::operator=(const Intern& rhs) {
    (void)rhs;
    return *this;
}

// Destructor
Intern::~Intern() {}

// Member function
AForm* Intern::makeForm(std::string name, std::string target) {
    std::string FormNames[] = {"shruberry creation", "robotomy request", "presidential pardon"};
    int cpt = 0;

    while (FormNames[cpt] != name && cpt < 3) {
        cpt++;
    }

    switch (cpt) {
        case 0:
            std::cerr << "Intern creates " << name << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cerr << "Intern creates " << name << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cerr << "Intern creates " << name << std::endl;
            return new PresidentialPardonForm(target);
        default:
            std::cerr << "Form doesn't exist" << std::endl;
            return NULL;
    }
}

