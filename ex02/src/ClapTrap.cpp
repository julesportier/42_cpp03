#include "ClapTrap.h"
#include <iostream>
#include <limits>
#include <typeinfo>
#include <cxxabi.h>

/****************
 * CONSTRUCTORS *
 * *************/
ClapTrap::ClapTrap()
	: m_health(10),
	m_energy(10),
	m_attackDamage(0),
	m_name("unnamed")
{
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
	: m_health(10),
	m_energy(10),
	m_attackDamage(0),
	m_name(name)
{
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& src)
	: m_health(src.getHealth()),
	m_energy(src.getEnergy()),
	m_attackDamage(src.getAttackDamage()),
	m_name(src.getName())
{
	std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src) {
		m_name = src.getName();
		m_health = src.getHealth();
		m_energy = src.getEnergy();
		m_attackDamage = src.getAttackDamage();
	}
	std::cout << "ClapTrap copy assignement operator called\n";
	return (*this);
}

/***********
 * GETTERS *
 * ********/
std::string ClapTrap::getName() const
{
	return (m_name);
}

unsigned int ClapTrap::getHealth() const
{
	return (m_health);
}

unsigned int ClapTrap::getEnergy() const
{
	return (m_energy);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (m_attackDamage);
}

/***********
 * ACTIONS *
 * ********/
void ClapTrap::attack(const std::string& target)
{
	if (m_energy == 0)
		std::cout << "Not enough energy to attack!\n";
	else if (m_health == 0)
		std::cout << "Not enough health to attack!\n";
	else {
		--m_energy;
		std::cout
			<< abi::__cxa_demangle(
				typeid(*this).name(), NULL, NULL, NULL)
			<< " " << m_name
			<< " attacks " << target
			<< ", causing " << m_attackDamage << " points of damage\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > m_health)
		m_health = 0;
	else
		m_health -= amount;
	std::cout
		<< abi::__cxa_demangle(
			typeid(*this).name(), NULL, NULL, NULL)
		<< " " << m_name
		<< " takes " << amount << " points of damage. "
		<< "Life remaining: " << m_health << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
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
			<< abi::__cxa_demangle(
				typeid(*this).name(), NULL, NULL, NULL)
			<< " " << m_name
			<< " get " << amount << " health points back. "
			<< "Health: " << m_health << "\n";
	}
}
