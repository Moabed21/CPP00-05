#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"ClapTrap Default Constructor Called\n";
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout<< "ClapTrap Constructor Called by : "<< _name<<std::endl;
	name = _name;
	attackdamage = 30;
	energypoints = 100;
	health = 100;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->name = other.name;
	this->health = other.health;
	this->attackdamage = other.attackdamage;
	this->energypoints = other.energypoints;
}

ClapTrap::~ClapTrap()
{
	std::cout<< "ClapTrap Destructor Called for : "<< name << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount <= health && energypoints > 0 && amount > 0)
	{
		health -= amount;
		energypoints--;
	}
	else
	{
		std::cout<<"cant take damage anymore :(\n";
		return;
	}
}

void ClapTrap::attack(const std::string& target)
{
	if (energypoints == 0 || health == 0)
		std::cout << "ClapTrap " << name << " cannot attack (no energy or health)!\n";
	else
	{
		std::cout<<"ClapTrap "<< name << " attacks " <<target<<", causing "<< attackdamage<<" points of damage!\n";
		energypoints--;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > 0 && energypoints > 0)
	{
		std::cout<< name<<" is being repaired by "<<amount<<" points!"<<std::endl;
		health += amount;
		energypoints--;
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called by " << this->name << std::endl;
	if (this != &other)
	{
		this->attackdamage = other.attackdamage;
		this->energypoints = other.energypoints;
		this->health = other.health;
		this->name = other.name;
	}
	return (*this);
}