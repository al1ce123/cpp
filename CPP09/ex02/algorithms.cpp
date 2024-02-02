#include <bits/stdc++.h>

void swap(int& a, int& b);
void insertionSort(int arr[], int size);
int  binarySearch(const std::vector<int>& arr, int left, int right, int key);
void binaryInsertionSort(std::vector<int>& arr, int left, int right);
void merge(std::vector<int>& arr, int left, int mid, int right);
void mergeInsertionSort(std::vector<int>& arr, int left, int right, int k);


// int main() {
//     int arr[10] = {5,4,8,98,999,-6,3,0,1,77};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for (auto x : arr) {
//         std::cout << x << ' ';
//     }
//     std::cout << '\n';

//     myInsertionSort(arr, size);

//     for (auto x : arr) {
//         std::cout << x << ' ';
//     }
//     std::cout << '\n';

//     return 0;
// }

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};
    int k = 3;  // Threshold for using binary insertion sort

    mergeInsertionSort(arr, 0, arr.size() - 1, k);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

// --- Insertion Sort ---
// Time complexity:  O(N^2) Ω(N) Θ(N^2)
// Space complexity: O(1)

// --- Binary Search ---
// Time complexity: 
// Space complexity:

// --- Binary Insertion Sort ---
// Time complexity: 
// Space complexity:

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertionSort(int arr[], int size) {
    int i, j;

    for (i = 1; i < size; ++i) {
        j = i;
        while (j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}


int binarySearch(const std::vector<int>& arr, int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left;
}

void binaryInsertionSort(std::vector<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = arr[i];

        int j = binarySearch(arr, left, i - 1, key);

        for (int k = i - 1; k >= j; --k) {
            arr[k + 1] = arr[k];
        }

        arr[j] = key;
    }
}

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1);
    std::vector<int> R(n2);

    for (int i = 0; i < n1; ++i) {
        L[i] = arr[left + i];
    }

    for (int j = 0; j < n2; ++j) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}

void mergeInsertionSort(std::vector<int>& arr, int left, int right, int k) {
    if (left < right) {
        if (right - left + 1 <= k) {
            binaryInsertionSort(arr, left, right);
        } else {
            int mid = left + (right - left) / 2;

            mergeInsertionSort(arr, left, mid, k);
            mergeInsertionSort(arr, mid + 1, right, k);

            merge(arr, left, mid, right);
        }
    }
}



