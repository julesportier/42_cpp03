# include "FragTrap.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
	m_health = 100;
	m_energy = 100;
	m_attackDamage = 30;
	std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	m_health = 100;
	m_energy = 100;
	m_attackDamage = 30;
	std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap::ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& src) 
{
	ClapTrap::operator=(src);
	std::cout << "FragTrap copy assigment operator called\n";
	return (*this);
}

/***********
 * ACTIONS *
 * ********/
void FragTrap::highFivesGuy() const
{
	if (m_energy == 0)
		std::cout << "Not enough energy to high five!\n";
	else if (m_health == 0)
		std::cout << "Not enough health to high five!\n";
	else
		std::cout << "FragTrap " << getName() << " wants high five!\n";
}
