#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string literal) {
    char    c = literal[0];
    int     i = static_cast<int>(std::atoi(literal.c_str()));
    float   f = static_cast<float>(std::atof(literal.c_str()));
    double  d = static_cast<double>(std::atof(literal.c_str()));

    std::cout << "char: " << c << '\n';
    std::cout << "int: " << i << '\n';

    std::ostringstream floatStream;
    floatStream << std::fixed << f;
    std::cout << "float: " << floatStream.str() << "f\n";

    std::ostringstream doubleStream;
    doubleStream << std::fixed << d;
    std::cout << "double: " << doubleStream.str() << '\n';

}