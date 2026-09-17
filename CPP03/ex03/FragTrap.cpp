# include "FragTrap.hpp"

void    FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requests high-fives from everyone!\n";
}

FragTrap::FragTrap(): ClapTrap()
{
    std::cout<<"Default Constructor Called by FragTrap\n";
    this->health = 100;
    this->energypoints = 100;
    this->attackdamage = 30;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
    std::cout<<"FragTrap Constructor Called by : "<< _name << std::endl;
    this->health = 100;
    this->energypoints = 100;
    this->attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy Constructor Called by : " << other.name<<'\n';
	this->name = other.name;
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
    std::cout<<"FragTrap Destructor Called for : " << this->name << "\n";
}