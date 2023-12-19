#include "Form.hpp" 


// Constructors
Form::Form(std::string name, int minGradeToSign, int minGradeToExecute) : _name(name), _formIsSigned(false), _minGradeToSign(minGradeToSign), _minGradeToExecute(minGradeToExecute)
{
    std::cout << "Default constructor called for " << this->getName() << std::endl;
    this->validateGrade();
}

Form::Form(const Form& src) : _name(src._name), _formIsSigned(false), _minGradeToSign(src._minGradeToSign), _minGradeToExecute(src._minGradeToExecute)
{
    std::cout << "Copy constructor called for " << this->getName() << std::endl;
    *this = src;
}

// Destructor
Form::~Form()
{
    std::cout << "Default destructor called for " << this->getName() << std::endl;
}


// Copy assignment operator
Form& Form::operator=(const Form& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;

    this->_formIsSigned = rhs.getState();
    return *this;

}

// Getters
std::string Form::getName() const
{
    return this->_name;
}

bool         Form::getState() const
{
    return this->_formIsSigned;
}

int         Form::getMinGradeToSign() const
{
    return this->_minGradeToSign;
}

int         Form::getMinGradeToExecute() const
{
    return this->_minGradeToExecute;
}

// Member functions
void Form::validateGrade()
{
    try
    {
        if (this->_minGradeToSign < 1 || this->_minGradeToExecute < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (this->_minGradeToSign > 150 || this->_minGradeToExecute > 150)
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

bool Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() <= this->getMinGradeToSign())
    {
        this->_formIsSigned = true;
        return true;
    }
    return false;
}