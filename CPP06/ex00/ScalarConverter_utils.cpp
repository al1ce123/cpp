#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string literal) {
    if (specialCase(literal))
        return;

    if (literal.size() == 1 && isPrint(literal[0])) {
        std::cout << "char: " << literal[0] << '\n';
        std::cout << "int: " << static_cast<int>(literal[0]) << '\n';
        std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << '\n';
        std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << '\n';
    } else {
        if (isInt(literal)) {
            char* endptr;
            long l = std::strtol(literal.c_str(), &endptr, 10);

            if (*endptr != '\0') {
                std::cerr << "Error: Conversion failed." << std::endl;
                return;
            }

            if ((l > 64 && l < 91) || (l > 96 && l < 123)) {
                std::cout << "char: " << static_cast<char>(l) << '\n';
            } else {
                std::cout << "char: Non displayable" << '\n';
            }
            if (l > MAX_INT || l < MIN_INT) {
                std::cout << "int: overflow" << '\n';
            } else {
                std::cout << "int: " << l << '\n';
            }
            std::cout << "float: " << static_cast<float>(l) << ".0f" << '\n';
            std::cout << "double: " << static_cast<double>(l) << ".0" << '\n';
        }
        else if (isFloat(literal)) {
            float f = static_cast<float>(std::atof(literal.c_str()));

            std::cout << "char: '*'" << '\n';
            if (f > MAX_INT || f < MIN_INT) {
                std::cout << "int: overflow" << '\n';
            } else {
                std::cout << "int: " << static_cast<int>(f) << '\n';
            }
            std::cout << "float: " << f;
            if (checkFractionalPart(f)) {
                std::cout << ".0f" << '\n';
            } else {
                std::cout << 'f' << '\n';
            }
            std::cout << "double: " << static_cast<double>(f);
            if (checkFractionalPart(f)) {
                std::cout << ".0" << '\n';
            } else {
                std::cout << '\n';
            }
        }
        else if (isDouble(literal)) {
            double d = static_cast<double>(std::atof(literal.c_str()));

            std::cout << "char: '*'" << '\n';
            if (d > MAX_INT || d < MIN_INT) {
                std::cout << "int: overflow" << '\n';
            } else {
                std::cout << "int: " << static_cast<int>(d) << '\n';
            }
            std::cout << "float: " << d;
            if (checkFractionalPart(d)) {
                std::cout << ".0f" << '\n';
            } else {
                std::cout << 'f' << '\n';
            }
            std::cout << "double: " << static_cast<double>(d);
            if (checkFractionalPart(d)) {
                std::cout << ".0" << '\n';
            } else {
                std::cout << '\n';
            }
        }
        else
            std::cout << "Impossible type conversion" << '\n';
    }
}

// Utils
bool checkFractionalPart(float f) {
    float tolerance = 1e-6;
    float fPart = std::abs(std::fmod(f, 1.0f));
    return fPart < tolerance;
}

bool isInt(std::string literal) {
    std::size_t i = 0;
    if (literal[0] == '-')
            i++;
    for (; i < literal.size(); i++) {
        if (!std::isdigit(literal[i]))
            return false;
    }
    return true;
}

bool isFloat(std::string literal) {
    int isPoint = 0;
    int isF = 0;
    std::size_t i = 0;

    if (literal[0] == '-')
        i++;
    for (; i < literal.size(); i++) {
        if (literal[i] == '.')
            isPoint++;
        if (literal[i] == 'f')
            isF++;
        if (!std::isdigit(literal[i]) && literal[i] != '.' && literal[i] != 'f')
            return false;
    }

    if (literal[literal.size() - 1] == 'f' && isPoint == 1 && isF == 1)
        return true;
    else if (isPoint == 1 && isF == 0)
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

    }
    else if (literal == "-nan") {
        std::cout << "char: impossible" << '\n';
        std::cout << "int: impossible" << '\n';
        std::cout << "float: -nanf" << '\n';
        std::cout << "double: -nan" << '\n';
        return true;
    } else
        return false;
}

bool isPrint(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));  
}

