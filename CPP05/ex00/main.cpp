#include "Bureaucrat.hpp"

int main() {
    std::cout << "\033[33m*** TESTING CONSTRUCTORS ***\033[0m" << std::endl;
    
    try {
        Bureaucrat b1("Alec", 1500);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    Bureaucrat b2("Louise", -1000);
    std::cout << b2 << std::endl;

    Bureaucrat b3;
    Bureaucrat b4("Tom", 1);

    std::cout << b4 << std::endl;
    b3 = b4;
    std::cout << b3 << std::endl;
    Bureaucrat b5(b4);
    std::cout << b5 << std::endl;

    std::cout << "\n\033[33m*** TESTING INC/DEC ***\033[0m" << std::endl;

    try {
        b5.incrementGrade();
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << b5 << std::endl;

    try {
        b5.decrementGrade();
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << b5 << std::endl;

    return 0;
}