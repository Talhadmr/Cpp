#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &assign) {
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &assign) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = assign.ideas[i];
        }
    }
    return *this;
}
