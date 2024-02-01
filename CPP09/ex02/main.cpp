#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "usage: ./PmergeMe <positive integer sequence>" << '\n';
        return -1;
    }

    std::vector<int> v;
    while (*++argv) {
        v.push_back(atoi(*argv));
    }

    // for (int i = 0; i < 5; ++i) {
    //     std::cout << v[i] << '\n';
    // }

    PmergeMe s(v);

    return 0;
}
