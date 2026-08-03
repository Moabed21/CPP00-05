#include "Weapon.hpp"

Weapon::Weapon()
{}

const std::string &Weapon::getType()
{
    const std::string &ref = this->type;
    return (ref);
}

void    Weapon::setType(std::string value)
{
    this->type = value;
}
Weapon::Weapon(std::string weapon)
{
    this->type = weapon;
}