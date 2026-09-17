#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string _name);
        FragTrap(const FragTrap &obj);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();
        void    highFivesGuys(void);
        void attack(const std::string& target);
};


#endif