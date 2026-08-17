#include "Harl.hpp"

void    Harl::complain(std::string level)
{
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
            // this notation means: dereferencing the ptr content inside component[i]
            // in the current object caller
            (this ->*components[i].ptr)();
            break;
        }
    }
}
int main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	std::cout << std::endl;

	harl.complain("INFO");
	std::cout << std::endl;

	harl.complain("WARNING");
	std::cout << std::endl;

	harl.complain("ERROR");
	std::cout << std::endl;

	harl.complain("INVALID");
	std::cout << std::endl;

	return 0;
}