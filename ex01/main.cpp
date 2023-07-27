#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clapTrapOne("first");
    ScavTrap scavTrapOne;

    clapTrapOne.attack("Foo");
    scavTrapOne.attack("Boo");

    scavTrapOne.beRepaired(12);
    scavTrapOne.takeDamage(5);

    scavTrapOne.guardGate();

    clapTrapOne.printInfo();
    scavTrapOne.printInfo();
    return (0);
}