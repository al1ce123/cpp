#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array
{
public:
    // Constructors
    Array();
    Array(unsigned int n);
    Array(const Array& src);
    Array& operator=(const Array& rhs);
    ~Array();

    // Member function
    unsigned int size() const;

    // Subscript oprerator
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    // Exception
    class IndexOutOfBounds : public std::exception
    {
    public:
        virtual const char* what() const throw() ;
    };

private:
    unsigned int _numElem;
    T* _myArr;
};