#include "Zombie.hpp"

int main()
{
    Zombie *s = newZombie("allawi");
    
    s->announce();
    delete s;
    return (0);
}