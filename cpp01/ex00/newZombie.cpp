#include "zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *new_zom =new  Zombie(name);
    return (new_zom);
}