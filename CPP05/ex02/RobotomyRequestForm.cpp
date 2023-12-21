#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 145, 137), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src) {
    *this = src;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {}

// Copy assignment operator overload
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
    this->_target = rhs._target;
    this->setState(rhs.getState());
    return *this;
}

// Member function
void RobotomyRequestForm::executeFormAction() const {
    std::srand(std::time(0));
    int randomValue = std::rand();

    std::cout << "drilling noises..." << std::endl;

    if (randomValue % 2 == 0)
        std::cout << "\033[32m" << this->_target << " has been robotomized successfully""\033[0m" << std::endl;
    else
        std::cout << "\033[31mrobotomy failed\033[0m" << std::endl;
}

