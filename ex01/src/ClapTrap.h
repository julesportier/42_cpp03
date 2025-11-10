#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& src);
	std::string getName() const;
	unsigned int getHealth() const;
	unsigned int getEnergy() const;
	unsigned int getAttackDamage() const;
	virtual void attack(const std::string& target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
protected:
	unsigned int m_health;
	unsigned int m_energy;
	unsigned int m_attackDamage;
private:
	std::string m_name;
};

#endif
