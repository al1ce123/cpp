#include "Array.hpp"

int main()
{
    Array<int> myArray(5);
    myArray[3] = 42;
    std::cout << myArray[3] << '\n';
    
    return 0;
}