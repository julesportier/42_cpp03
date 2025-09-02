#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.h"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap& src);
	~FragTrap();
	FragTrap& operator=(const FragTrap& src);
	bool getGateKeeper() const;
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuy() const;
};

#endif
