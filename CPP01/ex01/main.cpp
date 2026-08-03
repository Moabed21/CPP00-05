#include "Zombie.hpp"

int main()
{
    Zombie *s = zombieHorde(7,"a");
    for (int i = 0; i < 7; i++)
    {
        s[i].announce();
    }
    delete[]  s;
}