#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <positive integer sequence>" << '\n';
        return -1;
    }

    std::vector<int> v;
    int argument;
    while (*++argv) {
        argument = atoi(*argv);
        if (argument == 0 && std::strcmp(*argv, "0")) {
            std::cout << "Error" << '\n';
            return -1;
        }
        else if (argument >= 0) {
            v.push_back(atoi(*argv));
        } else {
            std::cout << "Error" << '\n';
            return -1;
        }
    }

    std::cout << "Before: ";
    for (std::size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';

    // mergeInsertionSort()

    std::cout << "After: ";
    for (std::size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';

    // std::cout << "Time to process a range of " << v.size() << " elements with  std::[vector] : " << /* time it took */ << "us" << '\n';
    // std::cout << "Time to process a range of " << v.size() << " elements with  std::[list] : " << /* time it took */ << "us" << '\n';

    return 0;
}
