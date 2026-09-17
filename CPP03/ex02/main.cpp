#include "FragTrap.hpp"

int main(void)
{
	ClapTrap ct1("Clap");
	FragTrap f("moath"), m;
	f.attack("hamdan");

	m = f;
	m.highFivesGuys();

	return (0);
}