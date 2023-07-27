#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Default name";
    _hitPoints = 10;
    _energy = 10;
    _attackDamage = 0;
    std::cout<<"Default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoints = 10;
    _energy = 10;
    _attackDamage = 0;
    std::cout<<"Constructor called - with a parameter"<<std::endl;
}

ClapTrap::~ClapTrap()
{
     std::cout<<"Destructor called"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& t)
{
    std::cout<<"Copy constructor called"<<std::endl;
    _name =t._name;
    _hitPoints = t._hitPoints;
    _energy = t._energy;
    _attackDamage =t._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& t)
{
    if(this != &t)
    {
        std::cout<<"Copy assignment operator called"<<std::endl;
        _name =t._name;
        _hitPoints = t._hitPoints;
        _energy = t._energy;
        _attackDamage =t._attackDamage;
    }
    return (*this);
}

void ClapTrap::printInfo()
{
    std::cout<<""<<std::endl;
    std::cout<<"name          : "<<_name<<std::endl;
    std::cout<<"hit points    : "<<_hitPoints<<std::endl;
    std::cout<<"energy        : "<<_energy<<std::endl;
    std::cout<<"attack damage : "<<_attackDamage<<std::endl;
    std::cout<<""<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(_energy > 0 || _hitPoints > 0)
    {
        std::cout<<"ClapTrap "<<_name<<" attacks "<<target<<" causing "<<_attackDamage<<" points of damage!"<<std::endl;
        --_energy;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_energy > 0 || _hitPoints > 0)
    {
        _attackDamage = _attackDamage + amount;
        std::cout<<"ClapTrap take "<<amount<<" damage"<<std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_energy > 0 || _hitPoints > 0)
    {
        _hitPoints = _hitPoints + amount;
        --_energy;
        std::cout<<"ClapTrap repairs itself, it gets "<<amount<<" hit points back"<<std::endl;
    }
}