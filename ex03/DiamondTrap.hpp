#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string _name;

public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& obj);
	DiamondTrap& operator=(const DiamondTrap& obj);

	void attack(const std::string& name);
	void whoAmI();
};

#endif