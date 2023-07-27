#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream> 

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& t);
        ClapTrap& operator=(const ClapTrap& t);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void printInfo();
    private:
        std::string _name;
        int _hitPoints;
        int _energy;
        int _attackDamage;
};

#endif
