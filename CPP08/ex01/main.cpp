#include "Span.hpp"

int main() {

    //Fill span using addNumber()

    int randomNumber;
    Span sp(5);
    std::srand(static_cast<unsigned int>(std::time(0)));

    try {
        for (std::size_t i = 0; i < 5; ++i) {
            randomNumber = std::rand() % 10;
            sp.addNumber(randomNumber);
        }

        // sp.addNumber(666); // should trigger an error!

        std::cout << "\033[1;32m\n***** Randomly generated values *****\033[0m" << "\n\n";
        for (std::size_t i = 0; i < 5; ++i) {
            std::cout << "array[" << i << "] = " <<  sp.getElements(i) << '\n';
        }
        std::cout << '\n';

        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
    }
    catch (const Span::TooManyElements& e) {
        std::cerr << "Error catched: " << e.what() << '\n';
    }
    catch (const Span::NullSpan& e) {
        std::cerr << "Error catched: " << e.what() << '\n';
    }

    // Fill span using a range of iterators

    std::cout << '\n';

    Span sp2(10);
    std::vector<int> values;

    values.push_back(5);
    values.push_back(5);
    values.push_back(7);
    values.push_back(99);
    values.push_back(101);

    iterator it = values.begin();

    sp2.fillSpan(values.begin(), values.end());

    for (; it != values.end(); ++it) {
        std::cout << *it << '\n';
    }

    std::cout << '\n';

    std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp2.longestSpan() << std::endl;

    std::cout << '\n';

    return 0;
}


// Subject's main

// int main()
// {
//     Span sp = Span(5);

//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);

//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;

//     return 0;
// }

// Desired output
// 2
// 14

