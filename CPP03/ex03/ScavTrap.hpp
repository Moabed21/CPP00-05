#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap 
{
    public:
        ScavTrap();
        ScavTrap(std::string _name);
        ScavTrap(const ScavTrap &obj);
        ScavTrap &operator=(const ScavTrap &other);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap();
};

#endif