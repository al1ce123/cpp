#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs) {
    this->type = rhs.getType();
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    return *this;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "\033[33mI'm not an animal so I don't talk...\033[0m" << std::endl;
}

