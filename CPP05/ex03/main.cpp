#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
    std::cout << "\033[33m*** TESTING ***\033[0m" << std::endl;

    AForm* myForm;
    Intern Joe;
    Bureaucrat b1("Bob", 4);

    myForm = Joe.makeForm("presidential pardon", "home");

    b1.signForm(*myForm);
    myForm->execute(b1);

    delete myForm;
    
    return 0;
}