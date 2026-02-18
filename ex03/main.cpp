#include "./DiamondTrap.hpp"

int main() {
	DiamondTrap dt1("Simon");
	DiamondTrap dt2(dt1);
	DiamondTrap dt3;

	dt3 = dt2;

	dt3.attack("CF");
	dt3.whoAmI();
	dt3.beRepaired(1000);
	dt3.takeDamage(1);
	dt3.highFivesGuys();

	return 0;
}