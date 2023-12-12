#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
    public:
        // Constructors
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& src);

        // Destructor
        virtual ~Bureaucrat();

        // Copy assignment operator
        Bureaucrat& operator=(const Bureaucrat& rhs);

        // Getters
        std::string getName() const;
        int         getGrade() const;

        // Member functions
        void validateGrade();
        void incrementGrade();
        void decrementGrade();

        // Exceptions
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade too high");
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade too low");
                }
        };

    protected:

    private:
        const std::string   _name;
        int                 _grade;
};