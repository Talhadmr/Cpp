#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanB
{
    public :
        Weapon pistol;
        string name;

        void attack();

        HumanB(string name);
        ~HumanB();

        void setWeapon(Weapon pistol);
        Weapon getWeapon(void);
};

#endif