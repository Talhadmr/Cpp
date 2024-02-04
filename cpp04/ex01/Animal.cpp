#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal default constructor called" << std::endl;
}


Animal::Animal(const Animal &copy) 
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &assign) {
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &assign)
        this->type = assign.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}





