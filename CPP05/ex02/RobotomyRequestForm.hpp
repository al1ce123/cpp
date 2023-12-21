#pragma once

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class Bureaucrat;

class RobotomyRequestForm : public AForm {
public:
    // Constructors
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& src);

    // Destructor
    virtual ~RobotomyRequestForm();

    // Copy assignment operator overload
    RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

    // Member function
    virtual void executeFormAction() const;
private:
    std::string _target;
};