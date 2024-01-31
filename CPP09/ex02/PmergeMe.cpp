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

int PmergeMe::binarySearch(int target) {
    int l,r,m;
    l = 0, r = this->_v.size() - 1;

    while (l <= r) {
        m = l + (r - l) / 2;
        if (this->_v[m] == target) {
            return m;
        } else if (this->_v[m] < target) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

void PmergeMe::insertionSort() {
    int i, j;

    for (i = 1; i < (static_cast<int>(this->_v.size()) - 1); ++i) {
        j = i;
        while (j > 0 && this->_v[j] < this->_v[j-1]) {
            int temp = this->_v[j];
            this->_v[j] = this->_v[j-1];
            this->_v[j-1] = temp;
            j--;
        }
    }
}