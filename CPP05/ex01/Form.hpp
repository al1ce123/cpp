#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
    // Constructors
    Form();
    Form(std::string name, int minGradeToSign, int minGradeToExecute);
    Form(const Form& src);

    // Destructor
    virtual ~Form();

    // Copy assignment operator overload
    Form& operator=(const Form& rhs);

    // Getters
    std::string getName() const;
    bool        getState() const;
    int         getMinGradeToSign() const;
    int         getMinGradeToExecute() const;

    // Member functions
    bool beSigned(Bureaucrat& b);
    bool validateGrade(int grade);

    // Exceptions
    class GradeTooHighException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
    
    class GradeTooLowException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

private:
    const std::string   _name;
    bool                _formIsSigned;
    const int           _minGradeToSign;
    const int           _minGradeToExecute;
};

std::ostream&  operator<<(std::ostream& os, const Form& rhs);
