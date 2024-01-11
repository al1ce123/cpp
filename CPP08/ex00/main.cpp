#include "easyfind.hpp"

int main() {
    std::vector<int> myArr;
    int target = -9;

    myArr.push_back(23);
    myArr.push_back(1000);
    myArr.push_back(99);
    myArr.push_back(1);
    myArr.push_back(-9);

    try
    {
        easyfind(myArr, target); 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}