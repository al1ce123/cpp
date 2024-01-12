#include "Base.hpp"

Base::~Base()
{

}

Base* generate(void)
{
    int random = (std::rand() % 3) + 1;
    Base* res;

    // try with implicit cast
    switch (random) {
        case 1:
            res = new A();
            return dynamic_cast<Base*>(res);
        case 2:
            res = new B();
            return dynamic_cast<Base*>(res);
        case 3:
            res = new C();
            return dynamic_cast<Base*>(res);
    };
}

void identify(Base *p)
{
  if (dynamic_cast<A *>(p))
    std::cout << "Class A" << '\n';
  else if (dynamic_cast<B *>(p))
    std::cout << "Class B" << '\n';
  else if (dynamic_cast<C *>(p))
    std::cout << "Class C" << '\n';
  else
    std::cout << "Unknown class" << '\n';
}

void identify(Base &p)
{
    Base tmp;
	
    try
    {
        tmp = dynamic_cast<A &>(p);
        (void) tmp;
        std::cout << "Class A" << '\n';
    }
    catch (std::exception &e)
    {

    }
    try
    {
        tmp = dynamic_cast<B &>(p);
        (void) tmp;
        std::cout << "Class B" << '\n';
    } 
    catch (std::exception &e)
    {

    }
    try
    {
        tmp = dynamic_cast<C &>(p);
        (void) tmp;
        std::cout << "Class C" << '\n';
    }
    catch (std::exception &e)
    {

    }
}