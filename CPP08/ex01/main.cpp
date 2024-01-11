#include "Span.hpp"

int main()
{
    int randomNumber;
    int i;
    Span sp = Span(10000);
    std::srand(static_cast<unsigned int>(std::time(0)));

    try 
    {
        for (i = 0; i < 10000; ++i)
        {
            randomNumber = std::rand() % 1000;
            sp.addNumber(randomNumber);
        }

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const Span::TooManyElements& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (const Span::NullSpan& e)
    {
        std::cerr << e.what() << '\n';
    }


    return 0;
}

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

