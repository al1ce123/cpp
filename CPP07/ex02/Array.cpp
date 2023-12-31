#include "Array.hpp"

// Constructors
template <typename T>
Array<T>::Array() : _numElem(0), _myArr(NULL)
{

}

template <typename T>
Array<T>::Array(unsigned int n) : _numElem(n), _myArr(new T[n])
{
    for (unsigned int i = 0; i < _numElem; ++i)
    {
        _myArr[i] = 0;
    }
}

template <typename T>
Array<T>::Array(const Array& src) : _numElem(src._numElem), _myArr(new T[src._numElem])
{
    for (unsigned int i = 0; i < _numElem; ++i)
    {
        _myArr[i] = src._myArr[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
    if (this != &rhs)
    {
        delete [] _myArr;
        _numElem = rhs._numElem;
        _myArr = new T[_numElem];
        for (unsigned int i = 0; i < _numElem; ++i)
        {
            _myArr[i] = rhs._myArr[i];
        }
    }
    return *this;

}

template <typename T>
Array<T>::~Array()
{
    delete [] _myArr;
}

// Member function
template <typename T>
unsigned int Array<T>::size() const
{
    return this->_numElem;
}

// Subscript operator
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index < _numElem)
    {
        return _myArr[index];
    }
    else
    {
        throw IndexOutOfBounds();
    }
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index < _numElem)
    {
        return _myArr[index];
    }
    else
    {
        throw IndexOutOfBounds();
    }
}

// Exceptions
template <typename T>
const char* Array<T>::IndexOutOfBounds::what() const throw() 
{
    return "\033[31mIndex out of bounds\033[0m";
}



