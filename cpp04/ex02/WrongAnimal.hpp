#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal(std::string type);
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &assign);
        void makeSound() const;
        std::string getType() const;
};

#endif
