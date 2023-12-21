#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 145, 137), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src) {
    *this = src;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {}

// Copy assignment operator overload
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    this->_target = rhs._target;
    this->setState(rhs.getState());
    return *this;
}

// Member function
void PresidentialPardonForm::executeFormAction() const {
    std::cout << "\033[32m" << this->_target << " has been pardoned by Zaphod Beeblebrox" << "\033[m" <<  std::endl;
}

