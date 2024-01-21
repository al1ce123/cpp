#pragma once

#include <iostream>

template <typename T, typename T2>
void iter(T* myArr, std::size_t length, T2 func) {
    for (std::size_t i = 0; i < length; i++) {
        func(myArr[i]);
    }
}

template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}