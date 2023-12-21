#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
public:
    // Constructors
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& src);

    // Destructor
    virtual ~Bureaucrat();

    // Copy assignment operator overload
    Bureaucrat& operator=(const Bureaucrat& rhs);

    // Getters
    std::string getName() const;
    int         getGrade() const;

    // Member functions
    bool validateGrade(int grade) const;
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm& f);

    // Exceptions
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    
private:
    const std::string   _name;
    int                 _grade;
};

// Insertion operator overload
std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs);