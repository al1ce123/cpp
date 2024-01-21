#include "iter.hpp"

int main() {
    int IntArr[] = {5, 4, 3, 745, 9};
    iter(IntArr, 5, printElement<int>);
    std::cout << '\n';

    std::string StringArr[] = {"hello", "bye", "cat", "dog", "toad"};
    iter(StringArr, 5, printElement<std::string>);
    std::cout << '\n';

    double DoubleArr[] = {5.3, 4.9, 968.599, 1.1, 0.999};
    iter(DoubleArr, 5, printElement<double>);
    std::cout << '\n';
    
    return 0;
}