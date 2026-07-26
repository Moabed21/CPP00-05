#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie *zombies = new Zombie[N];
    for (size_t i = 0; i < N; i++)
    {
        zombies[i].setname(name);
    }
    return(zombies);
}