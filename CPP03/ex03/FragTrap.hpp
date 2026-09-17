#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string _name);
        FragTrap(const FragTrap &obj);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &other);
        void    highFivesGuys(void);
};


#endif