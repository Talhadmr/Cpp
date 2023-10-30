#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>

#include "ClapTrap.hpp"

class FragTrap :public ClapTrap
{
 public:
  FragTrap();
  FragTrap(std::string name);
  ~FragTrap();
  FragTrap(const FragTrap& other);
  FragTrap& operator=(const FragTrap& other);

  void attack(const std::string& target);
  void highFivesGuys();
};

#endif // !FragTRAP_HPP