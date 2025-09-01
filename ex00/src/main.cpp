#include "ClapTrap.h"
#include <iostream>

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
	return (0);
}
