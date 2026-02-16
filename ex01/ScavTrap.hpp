#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "./ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator=(const ScavTrap& obj);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};

#endif