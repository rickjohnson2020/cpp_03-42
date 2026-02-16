#include "./FragTrap.hpp"

int main() {
	FragTrap ft("Simon");

	ft.attack("CF");
	ft.beRepaired(1000);
	ft.takeDamage(1);
	ft.highFivesGuys();

	return 0;
}