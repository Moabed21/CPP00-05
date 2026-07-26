#include "Zombie.hpp"

std::string    Zombie::getname()
{
    return (name);
}

void    Zombie::setname(std::string name)
{
    Zombie::name = name;
}
void    Zombie::announce()
{
    std::cout<<getname()<<": "<<"BraiiiiiiinnnzzzZ...\n";
}

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *zombie = new Zombie;
    zombie->name = name;
    return zombie;
}

void Zombie::randomChump( std::string name )
{
    Zombie *zombie = new Zombie;
    zombie->name = name;
    zombie->announce();
    delete zombie;

}