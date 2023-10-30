#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap {
 protected:
  unsigned int hitPoints;
  unsigned int attackDamage;
  unsigned int energyPoint;
  std::string name;

 public:
  ClapTrap();
  ClapTrap(std::string name);
  ~ClapTrap();
  ClapTrap(const ClapTrap& other);
  ClapTrap& operator=(const ClapTrap& other);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif // !CLAPTRAP_HPP
