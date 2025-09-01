#include "ClapTrap.h"

/****************
 * CONSTRUCTORS *
 * *************/
ClapTrap::ClapTrap(std::string name)
	: m_name(name),
	m_health(10),
	m_energy(10),
	m_attackDamage(0) {}

ClapTrap::ClapTrap(const ClapTrap& src)
	: m_name(src.getName()),
	m_health(src.getHealth()),
	m_energy(src.getEnergy()),
	m_attackDamage(src.getAttackDamage()) {}

ClapTrap::~ClapTrap() {};

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src) {
		m_name = src.getName();
		m_health = src.getHealth();
		m_energy = src.getEnergy();
		m_attackDamage = src.getAttackDamage();
	}
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
