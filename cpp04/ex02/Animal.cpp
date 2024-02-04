#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal " << type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal " << this->type << " destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal makeSound called" << std::endl;
}