#include "ClapTrap.h"
#include <iostream>
#include <limits>

int main()
{
	ClapTrap ct = ClapTrap("test");
	std::cout
		<< "-- ct --"
		<< "\nname: " << ct.getName()
		<< "\nhealth: " << ct.getHealth()
		<< "\nenergy: " << ct.getEnergy()
		<< "\nattackDamage: " << ct.getAttackDamage()
		<< "\n--------\n";
	ct.attack("hostile");
	ct.takeDamage(5);
	ct.takeDamage(7);
	ct.beRepaired(9);
	ct.takeDamage(std::numeric_limits<unsigned int>::max());
	ct.beRepaired(10);
	ct.beRepaired(std::numeric_limits<unsigned int>::max());
	return (0);
}
