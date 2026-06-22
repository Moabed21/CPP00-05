#include "header.hpp"

int count = 0;

static std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	search(PhoneBook *book)
{
	std::string x;
	int i;
	int index;

	for (i = 0; i < 8; i++)
	{
		if (book->contacts[i].getfname().empty())
			break;
		std::cout << std::setfill(' ') << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(book->contacts[i].getfname()) << "|";
		std::cout << std::setw(10) << truncate(book->contacts[i].getlname()) << "|";
		std::cout << std::setw(10) << truncate(book->contacts[i].getniname()) << std::endl;
	}
	if (i == 0)
	{
		std::cout << "phonebook is empty." << std::endl;
		return;
	}
	std::cout << "\nenter an index: ";
	getline(std::cin,x);
	if (x.length() != 1 || x[0] < '0' || x[0] > '7')
	{
		std::cout << "invalid index." << std::endl;
		return;
	}
	index = x[0] - '0';
	if (index >= i)
	{
		std::cout << "index out of range." << std::endl;
		return;
	}
	std::cout << "first name: " << book->contacts[index].getfname() << std::endl;
	std::cout << "last name: " << book->contacts[index].getlname() << std::endl;
	std::cout << "nickname: " << book->contacts[index].getniname() << std::endl;
	std::cout << "darkest secret: " << book->contacts[index].getdsec() << std::endl;
	std::cout << "phone number: " << book->contacts[index].getnumber() << std::endl;
}

void	add(PhoneBook *book)
{
	std::string p, f ,l ,n ,d;

	count = count % 8;
	std::cout << "enter first name: ";
	getline(std::cin,f);
	if(f.empty())
		return;
	std::cout << "enter last name: ";
	getline(std::cin,l);
	if(l.empty())
		return;
	std::cout << "enter nickname: ";
	getline(std::cin,n);
	if(n.empty())
		return;
	std::cout << "enter darkest secret: ";
	getline(std::cin,d);
	if(d.empty())
		return;
	std::cout<<"enter phone number: ";
	getline(std::cin,p);
	if(p.empty())
		return;
	book->contacts[count].setcontact(f,l,n,d,p);
	count++;
}
