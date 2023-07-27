#include "FragTrap.hpp"

FragTrap::FragTrap()
{
  _name = "Default name";
  _hitPoints = 100;
  _energy = 100;
  _attackDamage = 30;
  std::cout<<"Default constructor called - FragTrap"<<std::endl;

}

FragTrap::FragTrap(std::string name)
{
  _name = name;
  _hitPoints = 100;
  _energy = 100;
  _attackDamage = 30;
  std::cout<<"Default constructor called - FragTrap"<<std::endl;
}

FragTrap::~FragTrap()
{
  std::cout<<"Destructor called - FragTrap"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& t)
{
    std::cout<<"Copy constructor called - FragTrap"<<std::endl;
    _name =t._name;
    _hitPoints = t._hitPoints;
    _energy = t._energy;
    _attackDamage =t._attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& t)
{
    if(this != &t)
    {
        std::cout<<"Copy assignment operator called - FragTrap"<<std::endl;
        _name =t._name;
        _hitPoints = t._hitPoints;
        _energy = t._energy;
        _attackDamage =t._attackDamage;
    }
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if(_energy > 0 || _hitPoints > 0)
    {
        std::cout<<"FragTrap "<<_name<<" attacks "<<target<<" causing "<<_attackDamage<<" points of damage!"<<std::endl;
        --_energy;
    }
}


void FragTrap::highFivesGuys(void)
{
    std::cout<<"So, I don't have time to think of a sentence ... "<<std::endl;
}