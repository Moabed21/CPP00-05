#include "Zombie.hpp"

std::string    Zombie::getname()
{
    return (name);
}
void    Zombie::announce()
{
    std::cout<<getname()<<": "<<"BraiiiiiiinnnzzzZ...";
}

Zombie* Zombie::newZombie( std::string name )
{

}

void Zombie::randomChump( std::string name )
{
    
}