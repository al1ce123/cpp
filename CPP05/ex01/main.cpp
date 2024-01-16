#include "Bureaucrat.hpp"

int main() {
    std::cout << "\033[33m*** TESTING ***\033[0m" << std::endl;

    Bureaucrat b1("Charlotte", 21);
    Bureaucrat b2("Gaspard", 35);

    Form f1("MyForm", 30, -9);

    std::cout << "Form's state: " << f1.getState() << std::endl;

    b1.signForm(f1);
    b2.signForm(f1);

    std::cout << "Form's state: " << f1.getState() << std::endl;
    std::cout << '\n' << f1;

    return 0;
}