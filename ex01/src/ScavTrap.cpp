# include "ScavTrap.h"
#include <iostream>
#include <limits>

/****************
 * CONSTRUCTORS *
 * *************/
ScavTrap::ScavTrap(std::string name)
	: ClapTrap::ClapTrap(name),
	m_gateKeeper(false)
{
	m_health = 100;
	m_energy = 50;
	m_attackDamage = 20;
	std::cout << "ScavTrap default constructor called\n";
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
void ScavTrap::attack(const std::string& target) const
{
	std::cout
		<< "ScavTrap " << getName()
		<< " attacks " << target
		<< ", causing " << m_attackDamage << " points of damage\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > m_health)
		m_health = 0;
	else
		m_health -= amount;
	std::cout
		<< "ScavTrap " << getName()
		<< " takes " << amount << " points of damage. "
		<< "Life remaining: " << m_health << "\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + m_health < amount)
		m_health = std::numeric_limits<unsigned int>::max();
	else
		m_health += amount;
	std::cout
		<< "ScavTrap " << getName()
		<< " get " << amount << " health points back. "
		<< "Health: " << m_health << "\n";
}

void ScavTrap::guardGate()
{
	m_gateKeeper = true;
	std::cout << "ScavTrap " << getName() << " switched to gate keeper!\n";
}
