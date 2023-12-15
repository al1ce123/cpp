#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b0("Jenkins", 99);
    Bureaucrat b1 = b0;
    Bureaucrat b2("Sofia", 155);
    Bureaucrat b3("Harry", 1);
    Bureaucrat b4("Lola", 150);

    b3.incrementGrade(); // Harry
    b4.decrementGrade(); // Lola

    std::cout << b3.getGrade() << std::endl;
    std::cout << b4.getGrade() << std::endl;

    return 0;
}