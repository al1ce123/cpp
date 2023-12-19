#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("Alec", 78);
    Form f("test", 789, 789);

    std::cout << f.getState() << std::endl;

    b.signForm(f);

    std::cout << f.getState() << std::endl;

    return 0;
}