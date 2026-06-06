#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string.h>
class Contact{
	private:
		std::string fname;
		std::string lname;
		std::string niname;
		std::string dsecred;
		int phone;
	public:
		void	setcontact(std::string funame,std::string laname,std::string nickname, std::string dasecred,int phonenum);
		std::string    getcontact();
};

class PhoneBook : public Contact{
	public:
		Contact contacts[8];
	
};
void	search(PhoneBook book);
void	add(PhoneBook book);
#endif