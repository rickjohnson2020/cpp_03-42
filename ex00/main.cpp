#include "./ClapTrap.hpp"

int main() {
	ClapTrap ct;

	ct.attack("StrangerA");
	ct.beRepaired(1000);
	ct.takeDamage(1);

	return 0;
}