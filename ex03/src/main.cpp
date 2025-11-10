#include "FragTrap.h"
#include "ScavTrap.h"
#include "DiamondTrap.h"
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
	// ct.attack("hostile");
	//
	// ClapTrap ct_a = ClapTrap("mad");
	// std::cout
	// 	<< "-- ct_a --"
	// 	<< "\nname: " << ct_a.getName()
	// 	<< "\nhealth: " << ct_a.getHealth()
	// 	<< "\nenergy: " << ct_a.getEnergy()
	// 	<< "\nattackDamage: " << ct_a.getAttackDamage()
	// 	<< "\n--------\n";
	// ct_a.beRepaired(std::numeric_limits<unsigned int>::max());
	// for (int i = 0; i < 10; ++i)
	// 	ct_a.attack("hostile");
	// ct_a.beRepaired(10);
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

	// ScavTrap st = ScavTrap("scavy");
	// std::cout
	// 	<< "-- st --"
	// 	<< "\nname: " << st.getName()
	// 	<< "\nhealth: " << st.getHealth()
	// 	<< "\nenergy: " << st.getEnergy()
	// 	<< "\nattackDamage: " << st.getAttackDamage()
	// 	<< "\n--------\n";
	// st.attack("hostile");
	// st.takeDamage(5);
	// st.takeDamage(7);
	// st.beRepaired(9);
	//
	// ScavTrap st_bis = st;
	// std::cout
	// 	<< "-- st_bis --"
	// 	<< "\nname: " << st_bis.getName()
	// 	<< "\nhealth: " << st_bis.getHealth()
	// 	<< "\nenergy: " << st_bis.getEnergy()
	// 	<< "\nattackDamage: " << st_bis.getAttackDamage()
	// 	<< "\n--------\n";
	// st_bis.takeDamage(1);
	// for (int i = 0; i < 10; ++i)
	// 	st_bis.attack("hostile");
	// std::cout << st.getHealth() << " health points for st\n";
	//
	// ScavTrap st_ter = ScavTrap("ter");
	// st_ter = st_bis;
	// std::cout
	// 	<< "-- st_ter --"
	// 	<< "\nname: " << st_ter.getName()
	// 	<< "\nhealth: " << st_ter.getHealth()
	// 	<< "\nenergy: " << st_ter.getEnergy()
	// 	<< "\nattackDamage: " << st_ter.getAttackDamage()
	// 	<< "\n--------\n";
	// st_ter.takeDamage(1);
	// std::cout << st_bis.getHealth() << " health points for st_bis\n";
	// for (int i = 0; i < 10; ++i)
	// 	st_ter.attack("hostile");
	// st_ter.takeDamage(std::numeric_limits<unsigned int>::max());
	// st_ter.beRepaired(10);
	// st_ter.beRepaired(std::numeric_limits<unsigned int>::max());
	// FragTrap ft = FragTrap("fraggy");
	// std::cout
	// 	<< "-- ft --"
	// 	<< "\nname: " << ft.getName()
	// 	<< "\nhealth: " << ft.getHealth()
	// 	<< "\nenergy: " << ft.getEnergy()
	// 	<< "\nattackDamage: " << ft.getAttackDamage()
	// 	<< "\n--------\n";
	// ft.attack("hostile");
	// ft.takeDamage(5);
	// ft.takeDamage(7);
	// ft.beRepaired(9);
	//
	// FragTrap ft_bis = ft;
	// std::cout
	// 	<< "-- ft_bis --"
	// 	<< "\nname: " << ft_bis.getName()
	// 	<< "\nhealth: " << ft_bis.getHealth()
	// 	<< "\nenergy: " << ft_bis.getEnergy()
	// 	<< "\nattackDamage: " << ft_bis.getAttackDamage()
	// 	<< "\n--------\n";
	// ft_bis.takeDamage(1);
	// for (int i = 0; i < 10; ++i)
	// 	ft_bis.attack("hostile");
	// std::cout << ft.getHealth() << " health points for ft\n";
	//
	// FragTrap ft_ter = FragTrap("ter");
	// ft_ter = ft_bis;
	// std::cout
	// 	<< "-- ft_ter --"
	// 	<< "\nname: " << ft_ter.getName()
	// 	<< "\nhealth: " << ft_ter.getHealth()
	// 	<< "\nenergy: " << ft_ter.getEnergy()
	// 	<< "\nattackDamage: " << ft_ter.getAttackDamage()
	// 	<< "\n--------\n";
	// ft_ter.takeDamage(1);
	// std::cout << ft_bis.getHealth() << " health points for ft_bis\n";
	// for (int i = 0; i < 100; ++i)
	// 	ft_ter.attack("hostile");
	// ft_ter.beRepaired(10);
	DiamondTrap dt = DiamondTrap("Diam");
	dt.whoAmI();
	std::cout
		<< "-- ft --"
		<< "\nname: " << dt.getName()
		<< "\nhealth: " << dt.getHealth()
		<< "\nenergy: " << dt.getEnergy()
		<< "\nattackDamage: " << dt.getAttackDamage()
		<< "\n--------\n";
	dt.attack("hostile");

	// FragTrap dt_bis = dt;
	// std::cout
	// 	<< "-- dt_bis --"
	// 	<< "\nname: " << dt_bis.getName()
	// 	<< "\nhealth: " << dt_bis.getHealth()
	// 	<< "\nenergy: " << dt_bis.getEnergy()
	// 	<< "\nattackDamage: " << dt_bis.getAttackDamage()
	// 	<< "\n--------\n";
	// dt_bis.takeDamage(1);
	// for (int i = 0; i < 10; ++i)
	// 	dt_bis.attack("hostile");
	// std::cout << dt.getHealth() << " health points for dt\n";
	//
	// FragTrap dt_ter = FragTrap("ter");
	// dt_ter = dt_bis;
	// std::cout
	// 	<< "-- dt_ter --"
	// 	<< "\nname: " << dt_ter.getName()
	// 	<< "\nhealth: " << dt_ter.getHealth()
	// 	<< "\nenergy: " << dt_ter.getEnergy()
	// 	<< "\nattackDamage: " << dt_ter.getAttackDamage()
	// 	<< "\n--------\n";
	// dt_ter.takeDamage(1);
	// std::cout << dt_bis.getHealth() << " health points for dt_bis\n";
	// for (int i = 0; i < 100; ++i)
	// 	dt_ter.attack("hostile");
	// dt_ter.beRepaired(10);
	return (0);
}
