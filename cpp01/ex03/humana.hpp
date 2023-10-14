#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanA
{
    public :
        Weapon pistol;
        string name;

        void attack();

        HumanA(string name, Weapon pistol);
        ~HumanA();
};

#endif