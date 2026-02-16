#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);

	// void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);
	void highFivesGuys();
};

#endif