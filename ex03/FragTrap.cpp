#include "./FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default construtor called" << std::endl;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
		std::cout << "FragTrap constructor called and name " << name << " set" << std::endl;
};

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	return *this;
}

void FragTrap::highFivesGuys() {
	if (this->_hit_points > 0) {
		std::cout << "FragTrap " << this->_name << " says \"Give Me High Fives!\"" << std::endl;
	}
}