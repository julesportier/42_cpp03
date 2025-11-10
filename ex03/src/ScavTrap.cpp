# include "ScavTrap.h"
#include <iostream>
#include <limits>

/****************
 * CONSTRUCTORS *
 * *************/
ScavTrap::ScavTrap()
	: m_health(100)
	, m_energy(50)
	, m_attackDamage(20)
	, m_gateKeeper(false)
{
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap::ClapTrap(name)
	, m_health(100)
	, m_energy(50)
	, m_attackDamage(20)
	, m_gateKeeper(false)
{
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
std::string ScavTrap::getName() const
{
	return (m_name);
}

unsigned int ScavTrap::getHealth() const
{
	return (m_health);
}

unsigned int ScavTrap::getEnergy() const
{
	return (m_energy);
}

unsigned int ScavTrap::getAttackDamage() const
{
	return (m_attackDamage);
}

bool ScavTrap::getGateKeeper() const
{
	return (m_gateKeeper);
}

/***********
 * ACTIONS *
 * ********/
void ScavTrap::attack(const std::string& target)
{
	if (m_energy == 0)
		std::cout << "Not enough energy to attack!\n";
	else if (m_health == 0)
		std::cout << "Not enough health to attack!\n";
	else {
		--m_energy;
		std::cout
			<< "ScavTrap " << getName()
			<< " attacks " << target
			<< ", causing " << m_attackDamage << " points of damage\n";
	}
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
	if (m_energy == 0)
		std::cout << "Not enough energy to repair!\n";
	else if (m_health == 0)
		std::cout << "Not enough health to repair!\n";
	else {
		--m_energy;
		if (amount + m_health < amount)
			m_health = std::numeric_limits<unsigned int>::max();
		else
			m_health += amount;
		std::cout
			<< "ScavTrap " << getName()
			<< " get " << amount << " health points back. "
			<< "Health: " << m_health << "\n";
	}
}

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
