#include "./ClapTrap.hpp"

int main() {
	ClapTrap ct1("CF");
	ClapTrap ct2(ct1);
	ClapTrap ct3;

	ct3 = ct2;

	ct3.attack("Simon");
	ct3.beRepaired(1000);
	ct3.takeDamage(1);

	return 0;
}