#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <cstring>
#include <cmath>

#include <vector>
#include <list>

class PmergeMe {
public:
    // PmergeMe();
    PmergeMe(std::vector<int> v);
    PmergeMe(const PmergeMe& src);
    PmergeMe& operator=(const PmergeMe& rhs);
    virtual ~PmergeMe();

    int binarySearch(std::vector<int> v, int N, int key);
    void insertionSort();
    void binaryInsertionSort(std::vector<int> v);
    void merge();
    void mergeInsertionSort(std::vector<int> v, const int begin, const int end);

    void mergeSort();
    
private:
    std::vector<int> _v;
    std::list<int> _l;
};