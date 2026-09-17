#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout<<"Default Constructor Called by ScavTrap\n";
    this->health = 100;
    this->energypoints = 50;
    this->attackdamage = 20;
}

void ScavTrap::attack(const std::string& target)
{
	if (energypoints == 0 || health == 0)
		std::cout << "ScavTrap " << name << " cannot attack (no energy or health)!\n";
	else
	{
		std::cout<<"ScavTrap "<<  name << " attacks " <<target<<", causing "<< attackdamage<<" points of damage!\n";
		energypoints--;
	}
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
	std::cout<< "ScavTrap Constructor Called by "<< _name<<std::endl;
	this->health = 100;
	this->energypoints = 50;
	this->attackdamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap Destructor Called for : " << this->name <<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    std::cout << "ScavTrap Copy Constructor Called by : " << other.name<<'\n';
	this->name = other.name;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Copy assignment operator called by ScavTrap: " << this->name << std::endl;
	if (this != &other)
	{
		this->attackdamage = other.attackdamage;
		this->energypoints = other.energypoints;
		this->health = other.health;
		this->name = other.name;
	}
	return (*this);
}