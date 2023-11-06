#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// #define SIZE 4

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; //should not create a leak
    delete i;

    return 0;
}

// int main()
// {
    // Dog* dog = new Dog();
    // Cat* cat = new Cat();

    // delete dog;
    // delete cat;

    // std::cout << "\n/* - - - - - - - - - - - - - - */\n" << std::endl;

    // Animal* animals[SIZE];

    // for (int i = 0; i < SIZE; i++)
    // {
    //     if (i % 2 == 0)
    //         animals[i] = new Dog();
    //     else
    //         animals[i] = new Cat();
    // }

    // std::cout << "\n/* - - - - - - - - - - - - - - */\n" << std::endl;

    // for (int i = 0; i < SIZE; i++)
    //     animals[i]->makeSound();

    // std::cout << "\n/* - - - - - - - - - - - - - - */\n" << std::endl;

    // for (int i = 0; i < SIZE; i++)
    //     delete animals[i];

    // return 0;

// }

// int main()
// {

//     Dog basic;
//     {
//         Dog tmp = basic;
//     }

//     return 0;
// }
