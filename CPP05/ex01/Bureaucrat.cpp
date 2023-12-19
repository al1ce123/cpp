#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Default constructor called for " << this->getName() << std::endl;
    this->validateGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
    std::cout << "Copy constructor called for " << this->getName() << std::endl;
    *this = src;
}

// Destructor
Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called for " << this->getName() << std::endl;
}

// Copy assignment operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_grade = rhs.getGrade();
    return *this;
}

// Getters
std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

// Member function
void Bureaucrat::validateGrade()
{
    try
    {
        if (this->_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (this->_grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}

void Bureaucrat::incrementGrade()
{
    int newGrade = this->_grade - 1;

    try
    {
        if (newGrade < 1)
            throw GradeTooHighException();
        else
            this->_grade -= 1;
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrementGrade()
{
    int newGrade = this->_grade + 1;

    try
    {
        if (newGrade > 150)
            throw GradeTooLowException();
        else
            this->_grade += 1;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
}


void Bureaucrat::signForm(Form& f)
{
    if (f.beSigned(*this))
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
    else
        std::cout << this->getName() << " couldn't sign " << f.getName() << " because his grade is too low." << std::endl;

}


