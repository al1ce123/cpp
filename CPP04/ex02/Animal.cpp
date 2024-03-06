#include "Animal.hpp"

Animal::Animal(): type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const& src) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal() {
    std::cout << "Animal default destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const& rhs) {
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

std::string Animal::getType(void) const {
    return this->type;
}

void Animal::makeSound(void) const {
    std::cout << "\033[33mTardigrades cant't talk...\033[0m" << std::endl;
}
