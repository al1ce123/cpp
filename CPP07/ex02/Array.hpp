#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
class Array {
public:
    Array();
    Array(unsigned int n);
    Array(const Array& src);
    Array& operator=(const Array& rhs);
    ~Array();

    unsigned int size() const;

    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    class IndexOutOfBounds : public std::exception {
    public:
        virtual const char* what() const throw() ;
    };

private:
    unsigned int    _numElem;
    T*              _myArr;
};