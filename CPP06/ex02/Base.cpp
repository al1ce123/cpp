#include "Base.hpp"

Base::~Base() {}

Base* Base::generate(void) {
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

void Base::identify(Base* p) {
    
}

void Base::identify(Base& p) {

}