#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.h"

class FragTrap : public virtual ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& src);
	~FragTrap();
	FragTrap& operator=(const FragTrap& src);
	std::string getName() const;
	unsigned int getHealth() const;
	unsigned int getEnergy() const;
	unsigned int getAttackDamage() const;
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuy() const;
protected:
	unsigned int m_health;
	unsigned int m_energy;
	unsigned int m_attackDamage;
};

#endif
