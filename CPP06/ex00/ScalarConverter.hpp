#include <iostream>
#include <string>
#include <cctype>
#include <limits>
#include <cstdlib>
#include <sstream>

class ScalarConverter {
public:
    static void convert(std::string literal);

private:
    ScalarConverter();
};


bool isChar(std::string literal);