#include "easyfind.hpp"

int main() {
    std::list<int> myArr;
    int target = 23;

    // std::array<int, 5> myArr;
    // int target = -8;

    // myArr[0] = 5;
    // myArr[1] = 65;
    // myArr[2] = 55;
    // myArr[3] = 56565;
    // myArr[4] = 68;

    // std::vector<int> myArr;
    // int target = -8;

    myArr.push_back(23);
    myArr.push_back(1000);
    myArr.push_back(99);
    myArr.push_back(1);
    myArr.push_back(-9);

    try {
        easyfind(myArr, target); 
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}





// to do: overflow on easyfind, statistics, plage d'iterateur sur l'exo 1