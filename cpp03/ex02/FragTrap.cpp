#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->energyPoint = 100;
    this->hitPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->energyPoint = 100;
    this->hitPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->energyPoint = other.energyPoint;
    this->hitPoints = other.hitPoints;
    this->attackDamage = other.attackDamage;
    this->name = other.name;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (this->energyPoint == 0)
    {
        std::cout << "FragTrap " << this->name << " is out of energy" << std::endl;
        return ;
    }

    else if (this->hitPoints == 0)
    {
        std::cout << "FragTrap " << this->name << " is dead" << std::endl;
        return ;
    }

    std::cout << "FragTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " wants to high five" << std::endl;
}