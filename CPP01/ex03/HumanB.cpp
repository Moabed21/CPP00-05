#include "HumanB.hpp"
#include "Weapon.hpp"
void    HumanB::attack()
{
    std::cout<<this->name<<" attacks with their "<<this->weapon.getType();

}
void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}
HumanB::HumanB(std::string name)
{
    this->name = name;
}
void    HumanB::setType(std::string type)
{
    this->weapon.setType(type);
}