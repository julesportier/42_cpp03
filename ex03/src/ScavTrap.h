#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.h"

class ScavTrap : public virtual ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& src);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& src);
	std::string getName() const;
	unsigned int getHealth() const;
	unsigned int getEnergy() const;
	unsigned int getAttackDamage() const;
	bool getGateKeeper() const;
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
protected:
	unsigned int m_health;
	unsigned int m_energy;
	unsigned int m_attackDamage;
private:
	bool m_gateKeeper;
};

#endif
