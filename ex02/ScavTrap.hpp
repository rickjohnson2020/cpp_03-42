#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
private:
	// std::string _name;
	// int _hit_points;
	// int _energy_points;
	// int _attack_damage;

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator=(const ScavTrap& obj);

	void attack(const std::string& name);
	void guardGate();
};

#endif