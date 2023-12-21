#pragma once

#include "AForm.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
public:
    // Constructors
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& src);

    // Destructor
    virtual ~ShrubberyCreationForm();

    // Copy assignment operator overload
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

    // Member function
    virtual void executeFormAction() const;
private:
    std::string _target;
};