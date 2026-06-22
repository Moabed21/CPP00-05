#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "header.hpp"
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
#endif