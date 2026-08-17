#include "Harl.hpp"

void    Harl::complain(std::string level)
{
	int a = -1;
	component components[4]= {
		{.name="DEBUG",.ptr=&Harl::debug},
		{.name="INFO",  .ptr=&Harl::info},
		{.name="WARNING",.ptr=&Harl::warning},
		{.name="ERROR",.ptr=&Harl::error}
		// curly brackets cuz we're filling struct nodes
	};
	for (int i = 0; i <= 3; i++)
	{
		if(level == components[i].name)
		{
			a = i;
			break;
		}
	}

	switch (a)
	{
		case 3:
			(this->*components[3].ptr)();
			break;
		case 2:
			(this->*components[2].ptr)();
			(this->*components[3].ptr)();
			break;
		case 1:
			(this->*components[1].ptr)();
			(this->*components[2].ptr)();
			(this->*components[3].ptr)();
			break;
		case 0:
			(this->*components[0].ptr)();
			(this->*components[1].ptr)();
			(this->*components[2].ptr)();
			(this->*components[3].ptr)();
			break;
		default:
			std::cout<<"[ Probably complaining about insignificant problems ]\n";
		break;
	}
}

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
		return (1);

	harl.complain(av[1]);

	return 0;
}