#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.h"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& src);
	~FragTrap();
	FragTrap& operator=(const FragTrap& src);
	void highFivesGuy() const;
};

#endif
