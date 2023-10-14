#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
#include <string.h>

class Zombie
{
    private:
        std::string name;
    
    public:
        void announce(void);

        Zombie() { this->name = "default"; std::cout << "Zombie created!" << std::endl; }
        Zombie(std::string name)
        {
            this->name = name;
            std::cout << "Zombie created!" << std::endl;
        }
        ~Zombie()
        {
            std::cout << this->name << ": destroyed!" << std::endl;
        }

        void setName(std::string name)
        { 
            this->name = name;
        }

        std::string getname(std::string name)
        {
            return name;
        }
};
Zombie* zombieHorde( int N, std::string name );

#endif