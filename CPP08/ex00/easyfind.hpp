#include <iostream>
#include <algorithm>
#include <vector>
// #include <array>
#include <list>

class ElementNotFound : public std::exception {
public:
    const char* what() const throw() {
        return "Element not found";
    }
};

template <typename T>
bool easyfind(const T& c, const int& n) {
    typename T::const_iterator res = std::find(c.begin(), c.end(), n);
    if (res != c.end()) {
        typename T::size_type index = std::distance(c.begin(), res);
        std::cout << "Element " << n << " found at index " << index << '\n';
        return true;
    } 
    else {
        throw ElementNotFound();
    }
}