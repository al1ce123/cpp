#include "MutantStack.hpp"

// int main()
// {
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
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }

// int main()
// {
//     std::list<int> mstack;
//     mstack.push_back(5);
//     mstack.push_back(17);

//     std::list<int>::iterator tmp = mstack.end();
//     --tmp;

//     std::cout << *tmp<< std::endl;  // std::cout << mstack.top() << std::endl;
//     mstack.pop_back();              // mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     //[...]
//     mstack.push_back(0);
//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     // std::stack<int> s(mstack);
//     return 0;
// }


int main() {
    MutantStack<int> ms;

    ms.push(99);
    ms.push(42);
    ms.push(1);

    // MutantStack<int>::iterator it = ms.begin();
    // MutantStack<int>::iterator ite = ms.end();
    // --ite;

    // std::cout << "first element addr: " << &(*it) << " value: " << *it << '\n';
    // std::cout << "last element addr: " << &(*ite) << " value: " << *ite << '\n';

    std::cout << ms.top() << '\n';

    ms.pop();

    std::cout << ms.top() << '\n';

    for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << ms.top() << '\n';

    return 0;
}