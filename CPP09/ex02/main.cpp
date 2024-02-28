#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <positive integer sequence>" << '\n';
        return -1;
    }

    std::vector<int> v;
    std::deque<int> d;
    int argument;
    while (*++argv) {
        argument = atoi(*argv);
        if (argument == 0 && std::strcmp(*argv, "0")) {
            std::cout << "Error" << '\n';
            return -1;
        }
        else if (argument >= 0) {
            v.push_back(atoi(*argv));
            d.push_back(atoi(*argv));
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

    clock_t v_start = clock();
    mergeInsertionSort(v);
    clock_t v_end = clock();
    double v_res = static_cast<double>(v_end - v_start) / CLOCKS_PER_SEC;
    v_res *= 1000000;

    clock_t d_start = clock();
    mergeInsertionSort(d);
    clock_t d_end = clock();
    double d_res = static_cast<double>(d_end - d_start) / CLOCKS_PER_SEC;
    d_res *= 1000000;

    std::cout << "After: ";
    for (std::size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';

    std::cout << "Time to process a range of " << v.size() << " elements with  std::[vector] : \033[33m" << v_res << "\033[0m us" << '\n';
    std::cout << "Time to process a range of " << d.size() << " elements with  std::[deque] : \033[33m" << d_res << "\033[0m us" << '\n';

    return 0;
}

// int main(int argc, char *argv[]) {
//     if (argc < 2) {
//         std::cout << "Usage: " << argv[0] << " <positive integer sequence>" << '\n';
//         return -1;
//     }

//     std::deque<int> d;
//     std::vector<int> v;
//     int argument;
//     while (*++argv) {
//         argument = atoi(*argv);
//         if (argument == 0 && std::strcmp(*argv, "0")) {
//             std::cout << "Error" << '\n';
//             return -1;
//         }
//         else if (argument >= 0) {
//             d.push_back(atoi(*argv));
//             v.push_back(atoi(*argv));
//         } else {
//             std::cout << "Error" << '\n';
//             return -1;
//         }
//     }

//     std::cout << "<deque>Before: ";
//     for (std::size_t i = 0; i < d.size(); ++i) {
//         std::cout << d[i] << ' ';
//     }
//     std::cout << '\n';

//     mergeInsertionSort(d);

//     std::cout << "<deque>After: ";
//     for (std::size_t i = 0; i < d.size(); ++i) {
//         std::cout << d[i] << ' ';
//     }
//     std::cout << '\n';
//     std::cout << '\n';

//     std::cout << "<vector>Before: ";
//     for (std::size_t i = 0; i < v.size(); ++i) {
//         std::cout << v[i] << ' ';
//     }
//     std::cout << '\n';

//     mergeInsertionSort(v);

//     std::cout << "<vector>After : ";
//     for (std::size_t i = 0; i < v.size(); ++i) {
//         std::cout << v[i] << ' ';
//     }
//     std::cout << '\n';
// }
