
#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
    this->energyPoint = 100;
    this->hitPoints = 100;
    this->attackDamage = 30;
    std::cout << "ScavTrap default constructor called" << std::endl;

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->energyPoint = 100;
    this->hitPoints = 100;
    this->attackDamage = 30;
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->energyPoint = other.energyPoint;
    this->hitPoints = other.hitPoints;
    this->attackDamage = other.attackDamage;
    this->name = other.name;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoint == 0)
    {
        std::cout << "ScavTrap " << this->name << " is out of energy" << std::endl;
        return ;
    }

    else if (this->hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
        return ;
    }

    std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}


