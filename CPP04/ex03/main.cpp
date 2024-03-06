#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     ICharacter* me = new Character("me");

//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");

//     std::cout << '\n';

//     me->use(0, *bob);
//     me->use(1, *bob);

//     std::cout << '\n';

//     delete bob;
//     delete me;
//     delete src;

//     return 0;
// }

int main()
{
    Ice* test = new Ice();

    std::string res = test->getType();

    std::cout << '\n';

    std::cout << "test's type: "<< res << std::endl;

    std::cout << '\n';

    delete test;

    return 0;
}
