#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap {
private:
	std::string _name;
	int _hit_points;
	int _energy_points;
	int _attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif