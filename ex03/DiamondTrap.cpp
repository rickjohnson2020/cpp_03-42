#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	ClapTrap::_name = "noname_clap_name";
	this->_name = "noname";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
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
	std::cout << "DiamondTrap constructor called and name " << name << " set" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
		ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	this->_name = other._name;
	return *this;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	if (this->_hit_points > 0)
	{
		std::cout << "My name is " << this->_name
				  << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
	}
}