#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

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


// int main() {
    // std::stack<int> myStack;
    // std::vector<std::string> myVector;

    // myVector.push_back("hola");
    // myVector.push_back("test");
    // myVector.push_back("Paris");
    // myVector.push_back("Madrid");

    // myStack.push(99);
    // myStack.push(42);
    // myStack.push(11);

    // myStack.end();

    // for (std::vector<std::string>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
    //     if (*it == "Paris")
    //         *it = "London";
    //     std::cout << *it << " ";
    // }
    // std::cout << '\n';

    // MutantStack<int> ms;

    // ms.push(99);
    // ms.push(42);
    // ms.push(1);


    // std::cout << ms.getFirst() << '\n';
    // std::cout << ms.getLast() << '\n';


    // int* ite = ms.end();

    // std::cout << "Address of the first element: " << static_cast<void*>(it) << '\n';
    // std::cout << "Address of the last element: " << static_cast<void*>(ite) << '\n';

    // std::cout << ms.top() << '\n';

    // ms.pop();

    // std::cout << ms.top() << '\n';

    // for (std::vector<int>::iterator it = ms.begin(); it != ms.end(); ++it) {
    //     std::cout << *it << " ";
    // }

    // std::cout << typeid(ms.begin()).name() << '\n';

    // std::cout << ms.top() << '\n';

    // return 0;
// }