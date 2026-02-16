#include "./ScavTrap.hpp"

int main() {
	ScavTrap st1("CF");
	ScavTrap st2(st1);
	ScavTrap st3;

	st3 = st2;

	st3.attack("Simon");
	// st3.beRepaired(1000);
	// st3.takeDamage(1);
	st3.guardGate();

	return 0;
}