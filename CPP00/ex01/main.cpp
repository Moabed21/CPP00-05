#include "header.hpp"

void	Contact::setcontact(std::string funame,std::string laname,std::string nickname, std::string dasecred,int phonenum)
{
	fname = funame;
	lname = laname;
	niname = nickname;
	dsecred = dasecred;
	phone = phonenum;
}
// std::string    Contact::getcontact()
// {

// }
int	ft_strcmp(std::string s1, std::string s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	filter(std::string cmd, PhoneBook book)
{
	if(!ft_strcmp(cmd,"SEARCH"))
		search(book);
	if(!ft_strcmp(cmd,"ADD"))
		add(book);
}
int main()
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		std::cout << "<< enter cmd >> ";
		std::cin >> command;
		if(!ft_strcmp(command, "EXIT"))
			return(1);
		filter(command, book);
	}
	return (0);
}