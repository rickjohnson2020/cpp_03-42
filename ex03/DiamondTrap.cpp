#include "./DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default construtor called" << std::endl;
};

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
};

DiamondTrap::DiamondTrap(std::string name) :
		ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap constructor called and name set" << std::endl;
};

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);

	// if (this->_hit_points <= 0) {
	// 	std::cout << "Cannot attack. Hit point is not enough." << std::endl;
	// 	return;
	// }
	// if (this->_energy_points <= 0) {
	// 	std::cout << "Cannot attack. Energy point is not enough." << std::endl;
	// 	return;
	// }
	std::cout << "DiamondTrap " << this->_name << " attacks "
			  << target << ", causing " << this->_attack_damage
			  << " points of damage!" << std::endl;
}

// void FragTrap::takeDamage(unsigned int amount) {
// 	if (this->_hit_points > 0) {
// 		std::cout << "FragTrap " << this->_name << " takes " << amount << " damage." << std::endl;
// 	}
// }

// void FragTrap::beRepaired(unsigned int amount) {
// 	if (this->_energy_points <= 0) {
// 		std::cout << "Cannot repair. Energy point is not enough." << std::endl;
// 		return;
// 	}
// 	std::cout << "FragTrap " << this->_name << " repairs itself and regains "
// 			  << amount << " points!" << std::endl;
// 	this->_hit_points += amount;
// 	this->_energy_points--;
// }

// void FragTrap::highFivesGuys() {
// 	std::cout << "Please!" << std::endl;
// }

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->_name
		<< " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}