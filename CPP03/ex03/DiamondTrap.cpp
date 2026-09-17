#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
    std::cout<<"Default Constructor Called by DiamondTrap\n";
    this->name = "default";
    this->health = 100;
    this->energypoints = 50;
    this->attackdamage = 30;
}

DiamondTrap::DiamondTrap(const std::string _name): ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
    std::cout<<"DiamonedTrap Constructor Called by : "<< _name << std::endl;
	this->name = _name;
    this->health = 100;
    this->energypoints = 50;
    this->attackdamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    std::cout << "DiamondTrap Copy Constructor Called by : " << other.name<<'\n';
    this->name = other.name;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy assignment operator called by " << this->name << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout<<"Diamond Name: "<<this->name <<", Clap name: "<<ClapTrap::name<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"DiamondTrap Destructor Called for : "<<this->name<<std::endl;
}