#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter& src) {
    *this = src;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter& rhs) {
    (void)rhs;
    return *this;
}

ScalarConverter::~ScalarConverter() {}
