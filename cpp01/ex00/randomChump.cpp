#include "zombie.hpp"

void Zombie::randomChump( std::string name )
{
    Zombie zombie2(name);
    zombie2.announce();
}
