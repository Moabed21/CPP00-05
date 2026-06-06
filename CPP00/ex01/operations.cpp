#include "header.hpp"

int count = 0;
void	search(PhoneBook book)
{
	(void)book;
}

void	add(PhoneBook book)
{
	int	p;
	std::string f ,l ,n ,d;

	count = count % 8;
	std::cin >> f;
	std::cin >> l;
	std::cin >> n;
	std::cin >> d;
	std::cin >> p;
	book.contacts[count].setcontact(f,l,n,d,p);
	std::cout<<"con number : "<<count<<std::endl;
	count++;
}