#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     WrongAnimal Tardigrade;
//     Cat Felix;
//     Dog Napoleon;

//     std::cout << "\n\033[33m*** TYPES ***\033[0m\n" << std::endl;
//     std::cout << Tardigrade.getType() << std::endl;
//     std::cout << Felix.getType() << std::endl;
//     std::cout << Napoleon.getType() << std::endl;

//     std::cout << "\n\033[33m*** SOUNDS ***\033[0m\n" << std::endl;
//     Tardigrade.makeSound();
//     Felix.makeSound();
//     Napoleon.makeSound();
//     std::cout << "\n";
// }


// Subject's main
// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();

//     delete meta;
//     delete j;
//     delete i;

//     return 0;
// }


// Subject's main after replacing classes with Wrong ones
int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();

    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete i;

    return 0;
}