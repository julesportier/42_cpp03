#include "ScavTrap.h"
#include <iostream>
#include <limits>

int main()
{
	// ClapTrap ct = ClapTrap("test");
	// std::cout
	// 	<< "-- ct --"
	// 	<< "\nname: " << ct.getName()
	// 	<< "\nhealth: " << ct.getHealth()
	// 	<< "\nenergy: " << ct.getEnergy()
	// 	<< "\nattackDamage: " << ct.getAttackDamage()
	// 	<< "\n--------\n";
	// ct.attack("hostile");
	// ct.takeDamage(5);
	// ct.takeDamage(7);
	// ct.beRepaired(9);
	// ct.takeDamage(std::numeric_limits<unsigned int>::max());
	// ct.beRepaired(10);
	// ct.beRepaired(std::numeric_limits<unsigned int>::max());
	//
	// ClapTrap ct_bis = ct;
	// std::cout
	// 	<< "-- ct_bis --"
	// 	<< "\nname: " << ct_bis.getName()
	// 	<< "\nhealth: " << ct_bis.getHealth()
	// 	<< "\nenergy: " << ct_bis.getEnergy()
	// 	<< "\nattackDamage: " << ct_bis.getAttackDamage()
	// 	<< "\n--------\n";
	// ct_bis.takeDamage(1);
	// ct.getHealth();
	//
	// ClapTrap ct_ter = ClapTrap("ter");
	// ct_ter = ct_bis;
	// std::cout
	// 	<< "-- ct_ter --"
	// 	<< "\nname: " << ct_ter.getName()
	// 	<< "\nhealth: " << ct_ter.getHealth()
	// 	<< "\nenergy: " << ct_ter.getEnergy()
	// 	<< "\nattackDamage: " << ct_ter.getAttackDamage()
	// 	<< "\n--------\n";
	// ct_ter.takeDamage(1);
	// ct_bis.getHealth();

	ScavTrap st = ScavTrap("scavy");
	std::cout
		<< "-- st --"
		<< "\nname: " << st.getName()
		<< "\nhealth: " << st.getHealth()
		<< "\nenergy: " << st.getEnergy()
		<< "\nattackDamage: " << st.getAttackDamage()
		<< "\n--------\n";
	st.attack("hostile");
	st.takeDamage(5);
	st.takeDamage(7);
	st.beRepaired(9);
	st.takeDamage(std::numeric_limits<unsigned int>::max());
	st.beRepaired(10);
	st.beRepaired(std::numeric_limits<unsigned int>::max());

	ScavTrap st_bis = st;
	std::cout
		<< "-- st_bis --"
		<< "\nname: " << st_bis.getName()
		<< "\nhealth: " << st_bis.getHealth()
		<< "\nenergy: " << st_bis.getEnergy()
		<< "\nattackDamage: " << st_bis.getAttackDamage()
		<< "\n--------\n";
	st_bis.takeDamage(1);
	st.getHealth();

	ScavTrap st_ter = ScavTrap("ter");
	st_ter = st_bis;
	std::cout
		<< "-- st_ter --"
		<< "\nname: " << st_ter.getName()
		<< "\nhealth: " << st_ter.getHealth()
		<< "\nenergy: " << st_ter.getEnergy()
		<< "\nattackDamage: " << st_ter.getAttackDamage()
		<< "\n--------\n";
	st_ter.takeDamage(1);
	st_bis.getHealth();
	return (0);
}
