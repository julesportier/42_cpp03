# include "FragTrap.h"
#include <iostream>
#include <limits>

/****************
 * CONSTRUCTORS *
 * *************/
FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	m_health = 100;
	m_energy = 100;
	m_attackDamage = 30;
	std::cout << "FragTrap default constructor called\n";
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
void FragTrap::attack(const std::string& target)
{
	if (m_energy == 0)
		std::cout << "Not enough energy to attack!\n";
	else if (m_health == 0)
		std::cout << "Not enough health to attack!\n";
	else {
		--m_energy;
		std::cout
			<< "FragTrap " << getName()
			<< " attacks " << target
			<< ", causing " << m_attackDamage << " points of damage\n";
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount > m_health)
		m_health = 0;
	else
		m_health -= amount;
	std::cout
		<< "FragTrap " << getName()
		<< " takes " << amount << " points of damage. "
		<< "Life remaining: " << m_health << "\n";
}

void FragTrap::beRepaired(unsigned int amount)
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
			<< "FragTrap " << getName()
			<< " get " << amount << " health points back. "
			<< "Health: " << m_health << "\n";
	}
}

void FragTrap::highFivesGuy() const
{
	if (m_energy == 0)
		std::cout << "Not enough energy to high five!\n";
	else if (m_health == 0)
		std::cout << "Not enough health to high five!\n";
	else
		std::cout << "FragTrap " << getName() << " wants high five!\n";
}
