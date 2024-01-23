#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <list>
#include <typeinfo>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::vector<T>::iterator iterator;

    // Constructors
    MutantStack() : _size(0) {}

    MutantStack(const MutantStack& src) : _size(src._size) {
        for (std::size_t i = 0; i < src._size; ++i) {
            this->_myStack[i] = src._myStack[i];
        }
    }

    virtual ~MutantStack() {}

    MutantStack& operator=(const MutantStack& rhs) {
        if (this != &rhs) {
            this->_size = rhs._size;
            for (std::size_t i = 0; i < this->_size; ++i) {
                this->_myStack[i] = rhs._myStack[i];
            }
        }
        return *this;
    }

    // Member functions
    std::size_t size() {
        return this->_size;
    }

    void push(const T& value) {
        this->_myStack.push_back(value);
        this->_size++;
    }

    void pop() {
        if (this->_size > 0) {
            this->_size--;
            this->_myStack.pop_back();
        }
    }

    T top() {
        if (this->_size > 0) {
            return this->_myStack[this->_size - 1];
        }
        throw std::out_of_range("Stack is empty");
    }

    typename std::vector<T>::iterator begin() {
        return _myStack.begin();
    }

    typename std::vector<T>::iterator end() {
        return _myStack.end();
    }

private:
    std::vector<T>  _myStack;
    std::size_t     _size;
};