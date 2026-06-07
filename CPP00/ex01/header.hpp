#ifndef HEADER_HPP
#define HEADER_HPP

#include <iomanip>
#include <ios>
#include <iostream>
#include <string.h>
class Contact{
	private:
		std::string fname;
		std::string lname;
		std::string niname;
		std::string dsecret;
		std::string phone;
	public:
		void	setcontact(std::string funame,std::string laname,std::string nickname, std::string dasecret,std::string phonenum);
		std::string	getnumber();
		std::string getfname();
		std::string getlname();
		std::string getniname();
		std::string getdsec();
};

class PhoneBook : public Contact{
	public:
		Contact contacts[8];
};
void	search(PhoneBook *book);
void	add(PhoneBook *book);
int	ft_strcmp(std::string s1, std::string s2);

#endif