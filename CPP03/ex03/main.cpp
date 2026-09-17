#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("mo");

	diamond.whoAmI();
	diamond.attack("target");
	diamond.guardGate();
	diamond.highFivesGuys();

	return (0);
}