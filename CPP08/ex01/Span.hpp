#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Span {
public:
    // Constructors
    // Span();
    Span(unsigned int capacity);
    Span(const Span& src);
    Span& operator=(const Span& rhs);
    virtual ~Span();

    // Member functions
    unsigned int    getCapacity() const;
    void            addNumber(int n);
    int            shortestSpan();
    int            longestSpan();

    // Exceptions
    class TooManyElements : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "Too many elements";
        }
    };

    class NullSpan : public std::exception
    {
    public:
        const char* what() const throw()
        {
            return "NullSpan";
        }
    };

private:
    std::vector<int>    elements;
    unsigned int        capacity;
    unsigned int        numElements;
};


