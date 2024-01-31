
// https://iq.opengenus.org/merge-insertion-sort/
// https://fr.wikipedia.org/wiki/Tri_par_fusion-insertion
// https://github.com/decidedlyso/merge-insertion-sort/blob/master/README.md
// https://medium.com/@galalqassas0/most-popular-searching-algorithms-e656d32a07e4

// ------ ALGORITHMS ------
//  merge sort
//  insertion sort
//  binary search
//  binary insertion sort
//  merge insertion sort/ Ford-Johnson algorithm

// Ford-Johnson algorithm
// 4 1 45 99 6 5 78 2 3 0

// 1 -> [4,1] [45,99] [6,5] [78,2] [3,0]

// 2 -> [1,4] [45,99] [5,6] [2,78] [0,3] 

// 3 -> S = [0,3,4,6,45,78]



#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "usage: ./PmergeMe <target>" << '\n';
        return -1;
    }

    int target = atoi(argv[1]);
    std::vector<int> v;

    v.push_back(5);
    v.push_back(9);
    v.push_back(89);
    v.push_back(1);
    v.push_back(2);
    v.push_back(45);
    v.push_back(44);
    v.push_back(1000);
    v.push_back(0);
    v.push_back(3);

    PmergeMe s(v);

    s.insertionSort();
    // std::sort(v.begin(), v.end());

    int index = s.binarySearch(target);

    if (index >= 0) {
        std::cout << "Element " << v[index] << " is at index " << index << " :)" << '\n';
    } else {
        std::cout << "Element not found... ¯\\_(ツ)_/¯" << '\n';
    }
    
    return 0;
}
