#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& src);
	std::string getName() const;
	unsigned int getHealth() const;
	unsigned int getEnergy() const;
	unsigned int getAttackDamage() const;
private:
	std::string m_name;
	unsigned int m_health;
	unsigned int m_energy;
	unsigned int m_attackDamage;
};

#endif
