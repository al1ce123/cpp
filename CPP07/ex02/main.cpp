#include "Array.hpp"

int main()
{
    int* a = new int();
    Array<int>* arr = new Array<int>(10);
    Array<int> arr1(10);
    Array<std::string> arr2(5);
    const Array<double> arr3(10);

    std::cout << *a << '\n';
    std::cout << "size of arr is " << arr->size() << '\n';
    std::cout << "size of arr is " << arr1.size() << '\n';
    std::cout << "size of arr2 is " << arr2.size() << '\n';

    try {
        arr1[10] = 99;
    } catch (const Array<int>::IndexOutOfBounds& e) {
        std::cout << e.what() << '\n';
    }

    try {
        std::cout << "arr3[0]: " << arr3[0] << '\n';
    } catch (std::exception& e) {
        std::cout << e.what() << '\n';
    }

    std::cout << "arr2[0]: " << arr2[0] << '\n';

    delete arr;
    delete a;

    return 0;
}