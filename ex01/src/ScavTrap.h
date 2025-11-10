#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& src);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& src);
	bool getGateKeeper() const;
	void guardGate();
private:
	bool m_gateKeeper;
};

#endif
