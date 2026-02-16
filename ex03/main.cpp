#include "./DiamondTrap.hpp"

int main() {
	DiamondTrap dt1("Simon");
	DiamondTrap dt2(dt1);
	DiamondTrap dt3;

	dt3 = dt2;

	dt2.attack("CF");
	dt2.whoAmI();
	dt2.beRepaired(1000);
	dt2.takeDamage(1);
	dt2.highFivesGuys();

	return 0;
}