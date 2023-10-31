#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    WrongAnimal Tardigrade;
    Cat Felix;
    Dog Napoleon;

    std::cout << "\n*** TYPES ***\n" << std::endl;
    std::cout << Tardigrade.getType() << std::endl;
    std::cout << Felix.getType() << std::endl;
    std::cout << Napoleon.getType() << std::endl;

    std::cout << "\n*** SOUNDS ***\n" << std::endl;
    Tardigrade.makeSound();
    Felix.makeSound();
    Napoleon.makeSound();
    std::cout << "\n";
}

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();


//     // Added to avoid memory leaks
//     delete meta;
//     delete j;
//     delete i;

//     return 0;
// }

// int main()
// {
//     const WrongAnimal* meta = new WrongAnimal();
//     const WrongAnimal* i = new WrongCat();

//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     meta->makeSound();


//     // Added to avoid memory leaks
//     delete meta;
//     delete i;

//     return 0;
// }