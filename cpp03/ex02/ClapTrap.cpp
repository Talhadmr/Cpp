#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
  std::cout << "default constructor is called.\n";
}

ClapTrap::ClapTrap(std::string _name) {
  std::cout << "clap constructor is called.\n";

  name = _name;
  hitPoints = 10;
  energyPoint = 10;
  attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap& other) {
  std::cout << name << " is copied\n";

  name = other.name;
  hitPoints = other.hitPoints;
  energyPoint = other.energyPoint;
  attackDamage = other.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  std::cout << name << " operator assignment is called.\n";

  *this = other;
  return *this;
}

ClapTrap::~ClapTrap() { std::cout <<  "destructer is called\n"; }

void ClapTrap::attack(const std::string& target) {
  if (energyPoint > 0 && hitPoints > 0) {
    energyPoint--;
    std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << attackDamage << " points of damage!\n";
  } else
    std::cout << "energyPoint or hitPoints are not enough to attack. \n";
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (amount > hitPoints) {
    std::cout << name << " is died.!\n";
  } else {
    hitPoints -= amount;
    std::cout << name << " taked damage.! new hitPoint: " << hitPoints << '\n';
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (energyPoint > 0 && hitPoints) {
    energyPoint--;
    hitPoints += amount;
    std::cout << name << " repaired itself. new hitPoint is: " << hitPoints
              << " new energyPoint is " << energyPoint << '\n';
  } else {
    std::cout
        << "energyPoint or hitPoints are not enough to repaired itself. \n";
  }
}


