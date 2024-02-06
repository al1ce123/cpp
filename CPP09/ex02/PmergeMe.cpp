#include "PmergeMe.hpp"

// using std::vector

int binarySearch(const std::vector<int>& v, const int& t) {
    int l = 0;
    int r = v.size();
    while (l < r) {
        int m = l + (r - l) / 2;
        if (v[m] < t) {
            l = m + 1;
        } else {
            r = m;
        }
    }
    return l;
}

void mergeInsertionSort(std::vector<int>& v) {
    int n = v.size();
    if (n <= 1)
        return;

    for (int i = 0; i < n - 1; i += 2) {
        if (v[i] > v[i + 1]) {
            std::swap(v[i], v[i + 1]);
        }
    }

    std::vector<int> sortedSeq;
    for (int i = 1; i < n; i += 2) {
        sortedSeq.push_back(v[i]);
    }

    mergeInsertionSort(sortedSeq);

    for (int i = 0; i < n; i += 2) {
        int pos = binarySearch(sortedSeq, v[i]);
        sortedSeq.insert(sortedSeq.begin() + pos, v[i]);
    }
    v = sortedSeq;
}

// using std::deque

#include <deque>
#include <algorithm>

int binarySearch(const std::deque<int>& d, const int& t) {
    int l = 0;
    int r = d.size();
    while (l < r) {
        int m = l + (r - l) / 2;
        if (d[m] < t) {
            l = m + 1;
        } else {
            r = m;
        }
    }
    return l;
}

void mergeInsertionSort(std::deque<int>& d) {
    int n = d.size();
    if (n <= 1)
        return;

    for (int i = 0; i < n - 1; i += 2) {
        if (d[i] > d[i + 1]) {
            std::swap(d[i], d[i + 1]);
        }
    }

    std::deque<int> sortedSeq;
    for (int i = 1; i < n; i += 2) {
        sortedSeq.push_back(d[i]);
    }

    mergeInsertionSort(sortedSeq);

    for (int i = 0; i < n; i += 2) {
        int pos = binarySearch(sortedSeq, d[i]);
        sortedSeq.insert(sortedSeq.begin() + pos, d[i]);
    }
    d = sortedSeq;
}





