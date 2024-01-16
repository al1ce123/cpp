#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& src) {
    *this = src;
}

Serializer& Serializer::operator=(const Serializer& rhs) {
    (void)rhs;
    return *this;
}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr) {
    uintptr_t uintptr = reinterpret_cast<uintptr_t>(ptr);
    return uintptr;
}

Data* Serializer::deserialize(uintptr_t raw) {
    Data* newPtr = reinterpret_cast<Data*>(raw);
    return newPtr;
}