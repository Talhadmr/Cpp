#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap test("test");

    test.attack("enemy");
    test.takeDamage(42);
    test.highFivesGuys();
}