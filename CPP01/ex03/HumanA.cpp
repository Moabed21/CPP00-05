#include "HumanA.hpp"

HumanA::HumanA()
{

}
void    HumanA::attack()
{
    std::cout<<this->name<<" attacks with their "<<this->weapon.getType();

}
HumanA::HumanA(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon;
}