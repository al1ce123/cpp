#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
public:
    // Constructors
    AForm();
    AForm(std::string name, int minGradeToSign, int minGradeToExecute);
    AForm(const AForm& src);

    // Destructor
    virtual ~AForm();

    // Copy assignment operator overload
    AForm& operator=(const AForm& rhs);

    // Getters
    std::string getName() const;
    bool        getState() const;
    void        setState(bool state);
    int         getMinGradeToSign() const;
    int         getMinGradeToExecute() const;

    // Member function
    bool            beSigned(Bureaucrat& b);
    bool            validateGrade(int grade);
    void            execute(const Bureaucrat &executor) const;
    virtual void    executeFormAction() const = 0;


    // Exceptions
    class GradeTooHighException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
    
    class GradeTooLowException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

    class FormNotSignedException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

private:
    const std::string   _name;
    bool                _formIsSigned;
    const int           _minGradeToSign;
    const int           _minGradeToExecute;
    
};

std::ostream&  operator<<(std::ostream& os, const AForm& rhs);
