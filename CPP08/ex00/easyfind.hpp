#include <iostream>
#include <algorithm>
#include <vector>

template <typename Container, typename T>
bool easyfind(const Container& c, const T& n) {
    typename Container::const_iterator res = std::find(c.begin(), c.end(), n);
    if (res != c.end()) {
        typename Container::size_type index = std::distance(c.begin(), res);
        std::cout << "Element: " << n << " found at index: " << index << '\n';
        return true;
    } else {
        std::cout << "Element: " << n << " not found" << '\n';
        return false;
    }
}