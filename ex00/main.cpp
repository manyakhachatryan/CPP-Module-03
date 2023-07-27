#include "ClapTrap.hpp"

int main()
{
    ClapTrap first;
    ClapTrap second("2nd");
    ClapTrap third("3rd");

    second.attack("Foo");
    second.beRepaired(12);
    second.takeDamage(5);
    second.printInfo();
    return (0);
}