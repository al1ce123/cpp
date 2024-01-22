#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
class Array {
public:
    // Constructors
    Array() : _numElem(0), _myArr(NULL) {}

    Array(unsigned int n) : _numElem(n), _myArr(new T[n]) {
        for (unsigned int i = 0; i < n; ++i) {
            _myArr[i] = T();
        }
    }

    Array(const Array& src) : _numElem(src._numElem), _myArr(new T[src._numElem]) {
        for (std::size_t i = 0; i < _numElem; ++i) {
            _myArr[i] = src._myArr[i];
        }
    }

    // Destructor
    ~Array() {
        delete [] this->_myArr;
    }

    // Operator overload
    Array<T>& operator=(const Array& rhs)
    {
        if (this != &rhs) {
            delete [] _myArr;
            _numElem = rhs._numElem;
            _myArr = new T[_numElem];
            for (unsigned int i = 0; i < _numElem; ++i) {
                _myArr[i] = rhs._myArr[i];
            }
        }
        return *this;
    }

    // Member functions
    unsigned int size() const {
        return this->_numElem;
    }

    // Exception
    class IndexOutOfBounds : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "\033[31mIndex out of bounds\033[0m";
        }
    };

    // Subscript operators
    T& operator[](unsigned int index) {
        if (index < _numElem) {
            return _myArr[index];
        } else {
            throw IndexOutOfBounds();
        }
    }

    const T& operator[](unsigned int index) const {
        if (index < _numElem) {
            return _myArr[index];
        } else {
            throw IndexOutOfBounds();
        }
    }

private:
    unsigned int    _numElem;
    T*              _myArr;
};