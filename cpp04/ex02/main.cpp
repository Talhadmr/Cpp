#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
       //const Animal *test = new Animal(); ERROR

    const Animal *test = new Dog();
    const Animal *test2 = new Cat();
    test = test2;

    std::cout << test->getType() << std::endl;
    std::cout << test2->getType() << std::endl;




    delete test2;

    //system("leaks Animals");

    return 0;
 
}