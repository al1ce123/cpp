#include "Span.hpp"

int main() {
    int randomNumber;
    Span sp = Span(5);
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

