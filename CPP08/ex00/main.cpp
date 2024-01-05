#include "easyfind.hpp"

int main() {
    std::vector<int> myArr;
    int target = -8;

    myArr.push_back(23);
    myArr.push_back(1000);
    myArr.push_back(99);
    myArr.push_back(1);
    myArr.push_back(-9);

    easyfind(myArr, target);
    return 0;
}