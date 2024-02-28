#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const& src) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain() {
    std::cout << "Brain default destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const& rhs) {
    std::cout << "Brain assignment operator called" << std::endl;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}