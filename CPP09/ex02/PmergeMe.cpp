#include "PmergeMe.hpp"

// PmergeMe::PmergeMe() {
//     // std::cout << "Default constructor called." << '\n';
// }

PmergeMe::PmergeMe(std::vector<int> v) : _v(v.begin(), v.end()) {
    // std::cout << "Secondary constructor called." << '\n';
    
    // this->_v.resize(v.size()); resize is handled by range constructor
    // but otherwise be sure to resize the vector first to avoid segfaults
}

PmergeMe::PmergeMe(const PmergeMe& src) {
    // std::cout << "Copy constructor called." << '\n';
    for (std::size_t i = 0; i < src._v.size(); ++i) {
        _v[i] = src._v[i];
    }
    *this = src;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {
    // std::cout << "Copy assignment operator called." << '\n';
    for (std::size_t i = 0; i < rhs._v.size(); ++i) {
        this->_v[i] = rhs._v[i];
    }
    return *this;
}

PmergeMe::~PmergeMe() {
    // std::cout << "Destructor called." << '\n';
}


// *** ALGORITHMS ***

int PmergeMe::binarySearch(std::vector<int> v, int N, int key) {
    int left = 0;
    int right = N;
    int middle;

    while (left < right) {
        middle = floor(left + (right - left) / 2);
        if (v[middle] <= key) {
            left = middle + 1;
        } else {
            right = middle;
        }
    }
    return left;
}

void PmergeMe::binaryInsertionSort(std::vector<int> v) {
    std::size_t i;
    int j, key, pos;

    for (i = 1; i < v.size(); ++i) {
        key = v[i];
        pos = this->binarySearch(v, i, key);
        j = static_cast<int>(i);
        while (j > pos) {
            v[j] = v[j-1];
            j--;
        }
        v[pos] = key;
    }
}

void PmergeMe::merge() {

}

void PmergeMe::mergeInsertionSort(std::vector<int> v, const int l, const int r) {
    if (l >= r) {
        return;
    }

    int m = l + (r - l) / 2;
    mergeInsertionSort(v, l, m);
    mergeInsertionSort(v, m + 1, r);
    merge();
}