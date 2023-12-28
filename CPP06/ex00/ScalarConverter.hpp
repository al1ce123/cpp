#pragma once

#include <iostream>
#include <string>
#include <cctype>
#include <limits>
#include <cstdlib>
#include <sstream>
#include <cmath>

#define MAX_INT std::numeric_limits<int>::max()
#define MIN_INT std::numeric_limits<int>::min()
#define MAX_FLOAT std::numeric_limits<float>::max()
#define MIN_FLOAT std::numeric_limits<float>::min()
#define MAX_DOUBLE std::numeric_limits<double>::max()
#define MIN_DOUBLE std::numeric_limits<double>::min()

class ScalarConverter {
public:
    static void convert(std::string literal);

private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& src);
    ScalarConverter& operator=(const ScalarConverter& rhs);

    virtual ~ScalarConverter();
};

bool checkFractionalPart(float f);
bool isInt(std::string literal);
bool isFloat(std::string literal);
bool isDouble(std::string literal);
bool specialCase(std::string literal);