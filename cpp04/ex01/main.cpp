#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    return 0;
    
    //system("leaks brain");
}