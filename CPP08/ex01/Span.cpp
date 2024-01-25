#include "Span.hpp"

Span::Span(unsigned int n) : capacity(n), numElements(0) {}

Span::Span(const Span& src) : capacity(src.capacity), numElements(src.numElements) {
    for (int i = 0; i < static_cast<int>(src.numElements); ++i) {
        this->elements[i] = src.elements[i];
    }
    *this = src;
}

Span& Span::operator=(const Span& rhs) {
    this->capacity = rhs.capacity;
    this->numElements = rhs.numElements;
    for (int i = 0; i < static_cast<int>(rhs.numElements); ++i) {
        this->elements[i] = rhs.elements[i];
    }
    return *this;
}

Span::~Span() {}

// Member functions
unsigned int Span::getCapacity() const {
    return this->capacity;
}

void Span::addNumber(int n) {
    if (this->numElements >= this->capacity) {
        throw TooManyElements();
    }
    else {
        this->elements.push_back(n);
    }

    this->numElements++;
}

int Span::shortestSpan()
{
    int span = this->longestSpan();
    int i;
    int size = static_cast<int>(this->numElements);
    std::sort(this->elements.begin(), this->elements.end());
    
    for (i = 0; i < size - 1; ++i) {
        if ((this->elements[i + 1] - this->elements[i]) < span)
            span = this->elements[i + 1] - this->elements[i];
    }
    return span;
}

int Span::longestSpan() {
    if (this->numElements < 2)
        throw NullSpan();
    else {
        const_iterator maxConstIterator = std::max_element(this->elements.begin(), this->elements.end());
        const_iterator minConstIterator = std::min_element(this->elements.begin(), this->elements.end());
        int max = *maxConstIterator;
        int min = *minConstIterator;
        int span = max - min;
        return span;
    }
}

int Span::getElements(const std::size_t index) {
    if (index < this->capacity)
        return this->elements[index];
    throw IndexOutOfBounds();
}

void Span::fillSpan(iterator begin, iterator end) {
    std::size_t n = std::distance(begin, end);

    if ((n + this->numElements) > this->capacity)
        throw TooManyElements();
    this->elements.insert(this->elements.begin(), begin, end);
    this->numElements += n;
}

// Exceptions
const char* Span::TooManyElements::what() const throw() {
    return "\033[31mToo many elements\033[0m";
}

const char* Span::NullSpan::what() const throw() {
    return "\033[31mNullSpan\033[0m";
}

const char* Span::IndexOutOfBounds::what() const throw() {
    return "\033[31mIndex is out of bounds\033[0m";
}
