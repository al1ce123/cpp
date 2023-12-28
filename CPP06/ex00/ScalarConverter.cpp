#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

}

ScalarConverter::ScalarConverter(const ScalarConverter& src) {
    *this = src;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs) {
    (void)rhs;
    return *this;
}

ScalarConverter::~ScalarConverter() {

}

void ScalarConverter::convert(std::string literal) {
    
    if (specialCase(literal))
        return;

    if (literal.size() == 1 && std::isprint(literal[0])) {
        std::cout << "char: " << literal[0] << '\n';
        std::cout << "int: " << static_cast<int>(literal[0]) << '\n';
        std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << '\n';
        std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << '\n';
    } else {
        if (isInt(literal)) {
            char* endptr;
            int i = std::strtol(literal.c_str(), &endptr, 10);

            if (*endptr != '\0') {
                std::cerr << "Error: Conversion failed." << std::endl;
                return;
            }

            if ((i > 64 && i < 91) || (i > 96 && i < 123)) {
                std::cout << "char: " << static_cast<char>(i) << '\n';
            } else {
                std::cout << "char: Non displayable" << '\n';
            }
            std::cout << "int: " << i << '\n';
            std::cout << "float: " << static_cast<float>(i) << ".0f" << '\n';
            std::cout << "double: " << static_cast<double>(i) << ".0" << '\n';
        }
        else if (isFloat(literal)) {
            float f = static_cast<float>(std::atof(literal.c_str()));

            std::cout << "char: '*'" << '\n';
            std::cout << "int: " << static_cast<int>(f) << '\n';
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
            std::cout << "int: " << static_cast<int>(d) << '\n';
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
    }
}