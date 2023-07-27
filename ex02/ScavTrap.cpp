#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
  _name = "Default name";
  _hitPoints = 100;
  _energy = 50;
  _attackDamage = 20;
  std::cout<<"Default constructor called - ScavTrap"<<std::endl;

}

ScavTrap::ScavTrap(std::string name)
{
  _name = name;
  _hitPoints = 100;
  _energy = 50;
  _attackDamage = 20;
  std::cout<<"Default constructor called - ScavTrap"<<std::endl;
}

ScavTrap::~ScavTrap()
{
  std::cout<<"Destructor called - ScavTrap"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& t)
{
    std::cout<<"Copy constructor called - ScavTrap"<<std::endl;
    _name =t._name;
    _hitPoints = t._hitPoints;
    _energy = t._energy;
    _attackDamage =t._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& t)
{
    if(this != &t)
    {
        std::cout<<"Copy assignment operator called - ScavTrap"<<std::endl;
        _name =t._name;
        _hitPoints = t._hitPoints;
        _energy = t._energy;
        _attackDamage =t._attackDamage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if(_energy > 0 || _hitPoints > 0)
    {
        std::cout<<"ScavTrap "<<_name<<" attacks "<<target<<" causing "<<_attackDamage<<" points of damage!"<<std::endl;
        --_energy;
    }
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap is now in Gate keeper mode."<<std::endl;
}



