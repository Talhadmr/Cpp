#include "humanb.hpp"

void HumanB::attack()
{

    cout << this->name << " attacks with their " << this->pistol.getType() << endl;

} 

HumanB::HumanB(string name)
{
   this->name= name;
};

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon pistol)
{
    this->pistol = pistol;
}
Weapon HumanB::getWeapon(void)
{
    return (this->pistol);
}
