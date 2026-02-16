#include "./ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default construtor called" << std::endl;
};

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
		std::cout << "ScavTrap constructor called and name set" << std::endl;
};

void ScavTrap::attack(const std::string& target) {
	if (this->_hit_points <= 0) {
		std::cout << "Cannot attack. Hit point is not enough." << std::endl;
		return;
	}
	if (this->_energy_points <= 0) {
		std::cout << "Cannot attack. Energy point is not enough." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks "
			  << target << ", causing " << this->_attack_damage
			  << " points of damage!" << std::endl;
	this->_energy_points--;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

// void ClapTrap::takeDamage(unsigned int amount) {
// 	if (this->_hit_points > 0) {
// 		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage." << std::endl;
// 	}
// }

// void ClapTrap::beRepaired(unsigned int amount) {
// 	if (this->_energy_points <= 0) {
// 		std::cout << "Cannot repair. Energy point is not enough." << std::endl;
// 		return;
// 	}
// 	std::cout << "ClapTrap " << this->_name << " repairs itself and regains "
// 			  << amount << " points!" << std::endl;
// 	this->_hit_points += amount;
// 	this->_energy_points--;
// }