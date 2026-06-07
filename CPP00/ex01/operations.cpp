#include "header.hpp"

int count = 0;

void	search(PhoneBook *book)
{

	std::cout << 
	for (int i = 0; i < 8; i++)
	{
		// std::cout<<"entering cmd";
		
		if(!book->contacts[i].getfname()[0])
			break;
		std::cout<<i<<std::setw(10)<<"|";
		std::cout<<book->contacts[i].getfname()<<std::setw(10)<<std::setfill('*')<<"|";
		std::cout<<book->contacts[i].getlname()<<std::setw(10)<<"|";
		std::cout<<book->contacts[i].getniname()<< ".\n";
	}
}

void	add(PhoneBook *book)
{
	std::string	p;
	std::string f ,l ,n ,d;

	count = count % 8;
	std::cout << "enter first name: ";
	std::cin >> f;
	std::cout << "enter last name: ";
	std::cin >> l;
	std::cout << "enter nickname: ";
	std::cin >> n;
	std::cout << "enter darkest secret: ";
	std::cin >> d;
	std::cout<<"enter phone number: ";
	std::cin >> p;
	book->contacts[count].setcontact(f,l,n,d,p);
	std::cout<<"con number : "<< count << std::endl;
	count++;
}