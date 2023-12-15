#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp" 

class Form
{
    public:
        // Constructors
        Form(std::string name, bool formIsSigned, int minGradeToSign, int minGradeToExecute);
        Form(const Form& src);

        // Destructor
        virtual ~Form();

        // Copy assignment operator
        Form& operator=(const Form& rhs);

        // Getters
        std::string getName() const;
        int         getState() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;

		// Member functions
		void beSigned(Bureaucrat b);
        void validateGrade();

    protected:

    private:
        const std::string   _name;
        bool                _formIsSigned;
        const int           _minGradeToSign;
        const int           _minGradeToExecute;
};

std::ostream&  operator<<(std::ostream& os, const Form& rhs);
