#include "Bureaucrat.hpp"

int main() {
    std::cout << "\033[33m*** TESTING ***\033[0m" << std::endl;

    Bureaucrat b1("Charlotte", 20);
    Form f1("MyForm", 30, -9);

    std::cout << "Form's state: " << f1.getState() << std::endl;
    b1.signForm(f1);
    std::cout << '\n' << f1;

    return 0;
}