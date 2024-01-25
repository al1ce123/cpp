#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

typedef std::vector<int>::iterator iterator;
typedef std::vector<int>::const_iterator const_iterator;

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
    void            fillSpan(iterator begin, iterator end);

    // Exceptions
    class TooManyElements : public std::exception {
    public:
        const char* what() const throw();
    };

    class NullSpan : public std::exception {
    public:
        const char* what() const throw();
    };

    class IndexOutOfBounds : public std::exception {
    public:
        const char* what() const throw();
    };

private:
    std::vector<int>    elements;
    unsigned int        capacity;
    unsigned int        numElements;
};




