#include "./ScavTrap.hpp"

int main() {
	ScavTrap st("Kevin");

	st.attack("StrangerA");
	st.beRepaired(1000);
	st.takeDamage(1);
	st.guardGate();

	return 0;
}