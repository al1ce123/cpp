#include "RPN.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "usage ./RPN <expression>" << '\n';
        return -1;
    }

    RPN(argv[1]);

    return 0;
}