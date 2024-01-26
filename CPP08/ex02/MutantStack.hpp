#include <iostream>
#include <string>
#include <stack>
#include <list>
template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() {}

    MutantStack(const MutantStack& src) {
        *this = src;
    }

    virtual ~MutantStack() {}

    MutantStack& operator=(const MutantStack& rhs) {
        if (this == &rhs) {
            return *this;
        }
        std::stack<T>::operator=(rhs);
        return *this;
    }

    typedef typename std::stack<int>::container_type::iterator iterator;

    iterator begin() {
        return std::stack<T>::c.begin();
    }

    iterator end() {
        return std::stack<T>::c.end();
    }

    // check for const iterators
};