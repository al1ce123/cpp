#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(0) {
    bool isValid = this->validateGrade(grade);
    if (isValid)
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade) {}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Copy assignment operator overload
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    this->_grade = rhs.getGrade();
    return *this;
}

// Getters
std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

// Member function
bool Bureaucrat::validateGrade(int grade) const {
    try {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
        return false;
    }
    return true;
}

void Bureaucrat::incrementGrade() {
    int newGrade = this->_grade - 1;

    if (newGrade < 1)
        throw GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade() {
    int newGrade = this->_grade + 1;

    if (newGrade > 150)
        throw GradeTooLowException();
    else
        this->_grade++;
}

// Exceptions
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "\033[31mGrade too high\033[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "\033[31mGrade too low\033[0m";
}

// Insertion operator overload
std::ostream& operator<<(std::ostream& os, Bureaucrat const& rhs) {
    os << rhs.getName() << ", " << "bureaucrat grade " << rhs.getGrade() << ".";
    return os;
}



