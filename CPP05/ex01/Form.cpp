#include "Form.hpp" 

// Constructors
Form::Form() : _name("default"), _formIsSigned(false), _minGradeToSign(150), _minGradeToExecute(150) {}

Form::Form(std::string name, int minGradeToSign, int minGradeToExecute) : _name(name), _formIsSigned(false), _minGradeToSign(minGradeToSign), _minGradeToExecute(minGradeToExecute) {}

Form::Form(const Form& src) : _name(src._name), _formIsSigned(src._formIsSigned), _minGradeToSign(src._minGradeToSign), _minGradeToExecute(src._minGradeToExecute) {}

// Destructor
Form::~Form() {}

// Copy assignment operator overload
Form& Form::operator=(const Form& rhs) {
    this->_formIsSigned = rhs.getState();
    return *this;
}

// Getters
std::string Form::getName() const {
    return this->_name;
}

bool         Form::getState() const {
    return this->_formIsSigned;
}

int         Form::getMinGradeToSign() const {
    return this->_minGradeToSign;
}

int         Form::getMinGradeToExecute() const {
    return this->_minGradeToExecute;
}

// Member functions
bool Form::beSigned(Bureaucrat& b) {

    if (!this->validateGrade(this->getMinGradeToSign()))
        return false;
    if (b.getGrade() <= this->getMinGradeToSign() && b.getGrade() > 0) {
        this->_formIsSigned = true;
        return true;
    }
    else
        return false;
}

bool Form::validateGrade(int grade) {
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

// Exceptions
const char* Form::GradeTooHighException::what() const throw() {
	return ("\033[31mGrade too high\033[0m");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("\033[31mGrade too low\033[0m");
}

// Insertion operator overload
std::ostream&  operator<<(std::ostream& os, const Form& rhs) {
    os << "Name: " << "\033[32m" << rhs.getName() << "\033[0m" << "\nSigned: " << rhs.getState() << "\nMinimum grade to sign it: " << rhs.getMinGradeToSign() << "\nMinimum grade to execute it: " << rhs.getMinGradeToExecute() << std::endl;
    return os;
}