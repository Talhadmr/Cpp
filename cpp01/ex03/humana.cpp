#include "humana.hpp"

void HumanA::attack()
{
    cout << this->name << " attacks with their " << this->pistol->getType() << endl;
}

HumanA::HumanA(string name, Weapon &pistol)
{
    this->name = name;
    this->pistol = &pistol;
}

HumanA::~HumanA()
{
}