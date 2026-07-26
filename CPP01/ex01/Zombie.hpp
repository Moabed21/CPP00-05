#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	
	public:
		void    announce(void);
		void    setname(std::string name);
		void    randomChump( std::string name );
		std::string    getname();
		Zombie*         newZombie( std::string name );
        Zombie*         zombieHorde( int N, std::string name );
		~Zombie(){
            
			std::cout<<getname();
		}
	std::string name;
};


#endif