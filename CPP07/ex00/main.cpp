#include <iostream>
#include "whatever.hpp"

int main( void ) {
    int a = 2;
    int b = 3;

    MyNamespace::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << MyNamespace::min( a, b ) << std::endl;
    std::cout << "max(a, b) = " << MyNamespace::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    MyNamespace::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << MyNamespace::min( c, d ) << std::endl;
    std::cout << "max(c, d) = " << MyNamespace::max( c, d ) << std::endl;

    return 0;
}