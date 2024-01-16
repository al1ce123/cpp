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