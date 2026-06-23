#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie{
	
	public:
		void    announce(void);
		std::string    getname();
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
	
	std::string name;
};


#endif