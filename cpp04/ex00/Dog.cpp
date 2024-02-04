#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) 
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &assign) {
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &assign)
        this->type = assign.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}

