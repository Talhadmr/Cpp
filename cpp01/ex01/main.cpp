#include "zombie.hpp"

int main()
{
    Zombie *z = zombieHorde(5, "zombie");
    delete [] z;
}
