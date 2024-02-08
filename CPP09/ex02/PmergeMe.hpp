#pragma once

#include <iostream>
#include <ctime>
#include <cstring>
#include <stdlib.h>
#include <pthread.h>

#include <vector>
#include <deque>

int binarySearch(const std::vector<int>& v, const int& t);
int binarySearch(const std::deque<int>& d, const int& t);
void mergeInsertionSort(std::vector<int>& arr);
void mergeInsertionSort(std::deque<int>& d);

    
