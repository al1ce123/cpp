#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main() {
    std::cout << "\033[33m*** TESTING ***\033[0m" << std::endl;

    Bureaucrat b1("Elias", 1);
    Bureaucrat b2("Donald", 146);

    ShrubberyCreationForm f1("home");
    RobotomyRequestForm f2("desktop");
    PresidentialPardonForm f3("root");

    try {
        b2.signForm(f1);
        f1.execute(b2);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        b1.signForm(f1);
        f1.execute(b1);
        b1.signForm(f2);
        f2.execute(b1);
        b1.signForm(f3);
        f3.execute(b1);

    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}