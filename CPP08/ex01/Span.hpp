#include <iostream>
#include <string>
#include <vector>

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
    void            shortestSpan();
    void            longestSpan();

private:
    std::vector<int>    elements;
    unsigned int        capacity;
    unsigned int        numElements;
};


