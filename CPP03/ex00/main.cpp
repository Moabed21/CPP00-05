#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ct1("Clap");
	
	ct1.attack("Enemy");
	ct1.takeDamage(3);
	ct1.beRepaired(2);
	
	for (int i = 0; i < 10; i++)
		ct1.attack("Enemy");
	
	ct1.attack("Enemy");
	ct1.takeDamage(15);
	ct1.beRepaired(5);
	
	return (0);
}