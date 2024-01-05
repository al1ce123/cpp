#include "Span.hpp"

// Constructors
// Span::Span() : numElements(0) {

// }

Span::Span(unsigned int n) : capacity(n), numElements(0) {

}

Span::Span(const Span& src) : capacity(src.capacity), numElements(src.numElements) {
    for (int i = 0; i < src.numElements; ++i) {
        this->elements[i] = src.elements[i];
    }
    *this = src;
}

Span& Span::operator=(const Span& rhs) {
    this->capacity = rhs.capacity;
    this->numElements = rhs.numElements;
    for (int i = 0; i < rhs.numElements; ++i) {
        this->elements[i] = rhs.elements[i];
    }
    return *this;
}

Span::~Span() {

}

// Member functions
unsigned int Span::getCapacity() const {
    return this->capacity;
}

void Span::addNumber(int n) {
    if (this->numElements >= this->capacity) {
        throw std::exception;
    } else {
        this->elements.push_back(n);
    }
    this->numElements++;
}

void Span::shortestSpan() {

}

void Span::longestSpan() {

}

