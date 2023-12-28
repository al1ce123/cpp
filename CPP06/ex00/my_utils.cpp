#include "ScalarConverter.hpp"


bool checkFractionalPart(float f) {
    float tolerance = 1e-6;
    float fPart = std::abs(std::fmod(f, 1.0f));
    return fPart < tolerance;
}

bool isInt(std::string literal) {

    for (std::string::size_type i = 0; i < literal.size(); i++) {
        if (literal[0] == '-')
            continue;
        if (!std::isdigit(literal[i]))
            return false;
    }

    char *endptr;
    long temp = std::strtol(literal.c_str(), &endptr ,10);
    if (*endptr != '\0') {
        std::cerr << "Error: Conversion failed." << '\n';
        return false;
    }

    if (temp > MAX_INT || temp < MIN_INT)
        return false;
    return true;
}

bool isFloat(std::string literal) {
    int isPoint = 0;
    int isF = 0;

    for (std::string::size_type i = 0; i < literal.size(); i++) {
        if (literal[i] == '.')
            isPoint++;
        if (literal[i] == 'f')
            isF++;
        if (!std::isdigit(literal[i]) && literal[i] != '.' && literal[i] != 'f')
            return false;
    }

    if (literal[literal.size() - 1] == 'f' && isPoint == 1 && isF == 1)
        return true;
    return false;
}

bool isDouble(std::string literal) {
    int isPoint = 0;

    for (std::string::size_type i = 0; i < literal.size(); i++) {
        if (literal[i] == '.')
            isPoint++;
        if (!std::isdigit(literal[i]) && literal[i] != '.')
            return false;
    }

    if (isPoint == 1)
        return true;
    return false;
}

bool specialCase(std::string literal) {

    if (literal == "+inff" || literal == "+inf") {
        std::cout << "char: impossible" << '\n';
        std::cout << "int: impossible" << '\n';
        std::cout << "float: +inff" << '\n';
        std::cout << "double: +inf" << '\n';
        return true;

    } else if (literal == "-inff" || literal == "-inf") {
        std::cout << "char: impossible" << '\n';
        std::cout << "int: impossible" << '\n';
        std::cout << "float: -inff" << '\n';
        std::cout << "double: -inf" << '\n';
        return true;

    } else if (literal == "nan") {
        std::cout << "char: impossible" << '\n';
        std::cout << "int: impossible" << '\n';
        std::cout << "float: nanf" << '\n';
        std::cout << "double: nan" << '\n';
        return true;

    } else
        return false;
}

