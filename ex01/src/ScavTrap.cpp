# include "ScavTrap.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
ScavTrap::ScavTrap()
	: ClapTrap::ClapTrap()
	, m_gateKeeper(false)
{
	m_health = 100;
	m_energy = 50;
	m_attackDamage = 20;
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap::ClapTrap(name)
	, m_gateKeeper(false)
{
	m_health = 100;
	m_energy = 50;
	m_attackDamage = 20;
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap::ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) 
{
	ClapTrap::operator=(src);
	m_gateKeeper = src.getGateKeeper();
	std::cout << "ScavTrap copy assigment operator called\n";
	return (*this);
}

/***********
 * GETTERS *
 * ********/
bool ScavTrap::getGateKeeper() const
{
	return (m_gateKeeper);
}

/***********
 * ACTIONS *
 * ********/
void ScavTrap::guardGate()
{
	if (m_energy == 0)
		std::cout << "Not enough energy to keep gate!\n";
	else if (m_health == 0)
		std::cout << "Not enough health to keep gate!\n";
	else {
		m_gateKeeper = true;
		std::cout << "ScavTrap " << getName() << " switched to gate keeper!\n";
	}
}
