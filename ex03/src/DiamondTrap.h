#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ClapTrap.h"
# include "FragTrap.h"
# include "ScavTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& src);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& src);
	std::string getName() const;
	unsigned int getHealth() const;
	unsigned int getEnergy() const;
	unsigned int getAttackDamage() const;
	using ScavTrap::attack;
	void whoAmI() const;
private:
	using FragTrap::m_health;
	using ScavTrap::m_energy;
	using FragTrap::m_attackDamage;
	std::string m_name;
};

#endif
