#include "RPN.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage ./RPN <expression>" << '\n';
        return -1;
    }

    if (RPN(argv[1]) != -1)
        std::cout << RPN(argv[1]) << '\n';

    return 0;
}