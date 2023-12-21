#include "Intern.hpp"

// Constructors
Intern::Intern() {}

Intern::Intern(const Intern& src) {
    *this = src;
}

// Assignment operator overload
Intern& Intern::operator=(const Intern& rhs) {
    return *this;
}

// Destructor
Intern::~Intern() {}

// Member function
AForm* Intern::makeForm(std::string name, std::string target) {
    
}

