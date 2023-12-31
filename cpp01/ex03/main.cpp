#include "weapon.hpp"
#include "humana.hpp"
#include "humanb.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        std::cout << club.getType() << std::endl;
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}