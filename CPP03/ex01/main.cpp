#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap ct1("Clap");

	ScavTrap sc("Scav");
	sc.attack("Clap");
	sc.guardGate();
	ct1.attack("Enemy");

	for (int i = 0; i < 10; i++)
		ct1.attack("Enemy");
	
	ct1.attack("Enemy");
	ct1.takeDamage(15);
	ct1.beRepaired(5);
	
	return (0);
}