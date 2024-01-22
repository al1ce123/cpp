// #include "MutantStack.hpp"
#include <stack>
#include <vector>
#include <iostream>
#include <string>

// int main() {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();

//     ++it;
//     --it;

//     while (it != ite) {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);

//     return 0;
// }

int main() {
    std::stack<int> myStack;
    std::vector<std::string> myVector;

    myVector.push_back("hola");
    myVector.push_back("test");
    myVector.push_back("Paris");
    myVector.push_back("Madrid");

    myStack.push(99);
    myStack.push(42);
    myStack.push(11);

    // myStack.end();

    for (std::vector<std::string>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        if (*it == "Paris")
            *it = "London";
        std::cout << *it << " ";
    }
    std::cout << '\n';


}