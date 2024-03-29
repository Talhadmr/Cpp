#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;
    std::cout << "meta->getType(): " << meta->getType() << std::endl;
    std::cout << "j->getType(): " << j->getType() << std::endl;
    std::cout << "i->getType(): " << i->getType() << std::endl;
    
    std::cout << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    return 0;
}