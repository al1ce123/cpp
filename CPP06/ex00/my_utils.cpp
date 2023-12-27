#include "ScalarConverter.hpp"

// Detect the type of the literal
bool isChar(std::string literal) {
    if (literal.length() == 1 && isalpha(literal[0]))
        return true;
    return false;
}

bool isInt(std::string literal) {
    int i = 0;
    int sign = 1;
    long long temp;

    if (literal[i] == '-') {
        i++;
        sign = -1;
    }

    for (; i < literal.length(); i++) {

        if (!std::isdigit(literal[i]))
            return false;
    }

    if (literal.length() > 11) {
        return false;
    } else {
        temp = 
    }


    return true;
}





// Convert it from string to its actual type then convert it EXPLICITLY to the three other data types





// Display the results