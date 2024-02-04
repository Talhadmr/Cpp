#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Wrong Animal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "Wrong Animal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) 
{
    std::cout << "Wrong Animal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign) {
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this != &assign)
        this->type = assign.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}


