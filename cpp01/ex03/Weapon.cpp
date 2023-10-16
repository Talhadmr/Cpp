#include "weapon.hpp"

const std::string &Weapon::getType() const
{
    return this->type;
}
void Weapon::setType(string type)
{
    this->type = type;
}
Weapon::Weapon(){}

Weapon::Weapon(string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}