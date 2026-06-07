#include "header.hpp"

std::string Contact::getfname()
{
    return (fname);
}
std::string Contact::getlname()
{
    return (lname);
}
std::string Contact::getniname()
{
    return (niname);
}
std::string Contact::getdsec()
{
    return (dsecret);
}
std::string	Contact::getnumber()
{
    return (phone);
}
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