#include "AForm.hpp" 

// Constructors
AForm::AForm() : _name("default"), _formIsSigned(false), _minGradeToSign(150), _minGradeToExecute(150) {}

AForm::AForm(std::string name, int minGradeToSign, int minGradeToExecute) : _name(name), _formIsSigned(false), _minGradeToSign(minGradeToSign), _minGradeToExecute(minGradeToExecute) {}

AForm::AForm(const AForm& src) : _name(src._name), _formIsSigned(src._formIsSigned), _minGradeToSign(src._minGradeToSign), _minGradeToExecute(src._minGradeToExecute) {}

// Destructor
AForm::~AForm() {}    

// Copy assignment operator overload
AForm& AForm::operator=(const AForm& rhs) {
    this->_formIsSigned = rhs.getState();
    return *this;
}

// Getters
std::string AForm::getName() const {
    return this->_name;
}

bool         AForm::getState() const {
    return this->_formIsSigned;
}

void AForm::setState(bool state) {
    this->_formIsSigned = state;
}

int         AForm::getMinGradeToSign() const {
    return this->_minGradeToSign;
}

int         AForm::getMinGradeToExecute() const {
    return this->_minGradeToExecute;
}

// Member functions
bool AForm::beSigned(Bureaucrat& b) {

    if (!this->validateGrade(this->getMinGradeToSign()))
        return false;
    if (b.getGrade() <= this->getMinGradeToSign() && b.getGrade() > 0) {
        this->_formIsSigned = true;
        return true;
    }
    else
        return false;
}

bool AForm::validateGrade(int grade) {
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

void AForm::execute(const Bureaucrat &executor) const {
    if (this->getState() == false)
        throw FormNotSignedException();
    else if (this->getMinGradeToExecute() < executor.getGrade() && (this->getMinGradeToExecute() >= 1 && this->getMinGradeToExecute() <= 150))
        throw GradeTooLowException();
    this->executeFormAction();
}

// Exceptions
const char* AForm::GradeTooHighException::what() const throw() {
	return ("\033[31mGrade too high\033[0m");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("\033[31mGrade too low\033[0m");
}

const char* AForm::FormNotSignedException::what() const throw() {
	return ("\033[31mForm not signed\033[0m");
}

// Insertion operator overload
std::ostream&  operator<<(std::ostream& os, const AForm& rhs) {
    os << "Name: " << "\033[32m" << rhs.getName() << "\033[0m" << "\nSigned: " << rhs.getState() << "\nMinimum grade to sign it: " << rhs.getMinGradeToSign() << "\nMinimum grade to execute it: " << rhs.getMinGradeToExecute() << std::endl;
    return os;
}