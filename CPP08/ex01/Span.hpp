#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Span {
public:
    // Constructors
    Span(unsigned int capacity);
    Span(const Span& src);
    Span& operator=(const Span& rhs);
    virtual ~Span();

    // Member functions
    unsigned int    getCapacity() const;
    void            addNumber(int n);
    int             shortestSpan();
    int             longestSpan();
    int             getElements(const std::size_t index);

    // Exceptions
    class TooManyElements : public std::exception {
    public:
        const char* what() const throw() {
            return "\033[31mToo many elements\033[0m";
        }
    };

    class NullSpan : public std::exception {
    public:
        const char* what() const throw() {
            return "\033[31mNullSpan\033[0m";
        }
    };

    class IndexOutOfBounds : public std::exception {
    public:
        const char* what() const throw() {
            return "\033[31mIndex is out of bounds\033[0m";
        }
    };

private:
    std::vector<int>    elements;
    unsigned int        capacity;
    unsigned int        numElements;
};


