#include "DiamondTrap.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap::ClapTrap(name + "_clap_name")
	, m_name(name)
{
	std::cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
	: ClapTrap::ClapTrap(src)
{
	std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) 
{
	ClapTrap::operator=(src);
	std::cout << "DiamondTrap copy assigment operator called\n";
	return (*this);
}

/***********
 * GETTERS *
 * ********/
std::string DiamondTrap::getName() const
{
	return (m_name);
}

unsigned int DiamondTrap::getHealth() const
{
	return (m_health);
}

unsigned int DiamondTrap::getEnergy() const
{
	return (m_energy);
}

unsigned int DiamondTrap::getAttackDamage() const
{
	return (m_attackDamage);
}

/***********
 * ACTIONS *
 * ********/
void DiamondTrap::whoAmI() const
{
	std::cout << "I'm " << m_name << " and also " << ClapTrap::m_name << "\n";
}
