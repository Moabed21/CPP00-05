# include "FragTrap.hpp"

void    FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requests high-fives from everyone!\n";
}

void FragTrap::attack(const std::string& target)
{
	if (energypoints == 0 || health == 0)
		std::cout << "FragTrap " << name << " cannot attack (no energy or health)!\n";
	else
	{
		std::cout << "FragTrap "<< name << " attacks " <<target<<", causing "<< attackdamage<<" points of damage!\n";
		energypoints--;
	}
}
FragTrap::FragTrap(): ClapTrap()
{
    std::cout<<"FragTrap Default Constructor Called\n";
    this->health = 100;
    this->energypoints = 100;
    this->attackdamage = 30;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
    std::cout<<"FragTrap Constructor Called by : "<< _name << std::endl;
	this->name = _name;
    this->health = 100;
    this->energypoints = 100;
    this->attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "FragTrap Copy Constructor Called by : " << obj.name<<'\n';
	this->name = obj.name;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignment operator called by " << this->name << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap Destructor Called for : " << name << "\n";
}