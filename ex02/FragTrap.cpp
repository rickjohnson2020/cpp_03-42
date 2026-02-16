#include "./FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default construtor called" << std::endl;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
		std::cout << "FragTrap constructor called and name set" << std::endl;
};

void FragTrap::attack(const std::string& target) {
	if (this->_hit_points <= 0) {
		std::cout << "Cannot attack. Hit point is not enough." << std::endl;
		return;
	}
	if (this->_energy_points <= 0) {
		std::cout << "Cannot attack. Energy point is not enough." << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " attacks "
			  << target << ", causing " << this->_attack_damage
			  << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (this->_hit_points > 0) {
		std::cout << "FragTrap " << this->_name << " takes " << amount << " damage." << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points <= 0) {
		std::cout << "Cannot repair. Energy point is not enough." << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " repairs itself and regains "
			  << amount << " points!" << std::endl;
	this->_hit_points += amount;
	this->_energy_points--;
}

void FragTrap::highFivesGuys() {
	std::cout << "Please!" << std::endl;
}