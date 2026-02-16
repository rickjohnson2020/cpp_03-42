#include "./ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("noname"), _hit_points(10),
		_energy_points(10), _attack_damage(0) {
	std::cout << "Default construtor called" << std::endl;
};

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10),
		_energy_points(10), _attack_damage(0) {
		std::cout << "Constructor called and name " << name << " set" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this == &other)
		return *this;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_hit_points <= 0) {
		std::cout << "Cannot attack. Hit point is not enough." << std::endl;
		return;
	}
	if (this->_energy_points <= 0) {
		std::cout << "Cannot attack. Energy point is not enough." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks "
			  << target << ", causing " << this->_attack_damage
			  << " points of damage!" << std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit_points > 0) {
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage." << std::endl;
		this->_hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points <= 0) {
		std::cout << "Cannot repair. Energy point is not enough." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " repairs itself and regains "
			  << amount << " points!" << std::endl;
	this->_hit_points += amount;
	this->_energy_points--;
}