#include "Zombie.hpp"

Zombie::Zombie()
{
}
void	Zombie::setName(std::string name)
{
    this->name = name;
}
Zombie::~Zombie()
{
    std::cout<<this->name<< ": is destroyed"<<std::endl;
}

void    Zombie::announce()
{
    std::cout<< this->name <<": "<<"BraiiiiiiinnnzzzZ...\n";
}