#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    IMateriaSource* m = new MateriaSource();
    Ice* a = new Ice();
    AMateria* b = new Cure();
    AMateria* tmp;

    m->learnMateria(a);
    m->learnMateria(b);

    ICharacter* luc = new Character("luc");

    tmp = m->createMateria("ice");
    luc->equip(tmp);

    ICharacter* vader = new Character("vader");
    ICharacter* copy = vader;

    luc->use(0, *copy);

    std::cout << '\n';

    a->use(*vader);
    b->use(*luc);

    std::cout << '\n';

    tmp = m->createMateria("test");
    luc->equip(tmp);
    luc->use(1, *vader);

    delete luc;
    delete vader;
    delete m;

    return 0;
}

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
