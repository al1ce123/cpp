#pragma once

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {
public:
    // Constructors
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& src);

    // Destructor
    virtual ~PresidentialPardonForm();

    // Copy assignment operator overload
    PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

    // Member function
    virtual void executeFormAction() const;
private:
    std::string _target;
};