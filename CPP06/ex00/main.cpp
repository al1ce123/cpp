#include "ScalarConverter.hpp"

int main(int argc, char *argv[]) {

    if (argc == 2) {
        ScalarConverter::convert(argv[1]);
    } else {
        std::cout << "Error: wrong number of arguments. Usage: ./convert <literal>" << '\n';
        return 1;
    }

    return 0;
}