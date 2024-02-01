#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>

class PmergeMe {
public:
    // PmergeMe();
    PmergeMe(std::vector<int> v);
    PmergeMe(const PmergeMe& src);
    PmergeMe& operator=(const PmergeMe& rhs);
    virtual ~PmergeMe();

    int binarySearch(int target);
    void insertionSort();
    void binaryInsertionSort();
    void merge(int arr[], const int l, const int m, const int r);
    void mergeSort(int arr[], const int l, const int r);
    
private:
    std::vector<int> _v;
};