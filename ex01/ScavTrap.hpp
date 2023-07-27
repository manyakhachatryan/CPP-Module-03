#ifndef SCAVTRAP_HPP
#define  SCAVTRAP_HPP

#include <iostream> 
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
        public:
            ScavTrap();
            ScavTrap(std::string name);
            ~ScavTrap();
            ScavTrap(const ScavTrap& t);
            ScavTrap& operator=(const ScavTrap& t);
            void attack(const std::string& target);
            void guardGate();
};

#endif