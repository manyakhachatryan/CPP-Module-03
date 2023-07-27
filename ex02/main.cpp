#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clapTrapOne("first");
    FragTrap fragTrapOne;
    clapTrapOne.attack("Foo");
    fragTrapOne.attack("Boo");

    fragTrapOne.beRepaired(12);
    fragTrapOne.takeDamage(5);

    fragTrapOne.highFivesGuys();

    clapTrapOne.printInfo();
    fragTrapOne.printInfo();
    return (0);
}