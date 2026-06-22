#include "header.hpp"

void	Contact::setcontact(std::string funame,std::string laname, std::string nickname, std::string dasecret, std::string phonenum)
{
	fname = funame;
	lname = laname;
	niname = nickname;
	dsecret = dasecret;
	phone = phonenum;
}

void	filter(std::string cmd, PhoneBook *book)
{
	if (cmd == "SEARCH")
		search(book);
	if (cmd == "ADD")
		add(book);
}
int main()
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		std::cout << "<< enter cmd >> ";
		getline(std::cin,command);
		if(command == "EXIT")
			return(1);
		filter(command, &book);
	}
	return (0);
}