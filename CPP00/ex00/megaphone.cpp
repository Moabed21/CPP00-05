#include <iostream>
#include <string.h>

int main(int ac , char **av)
{
	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{		
		for (int i = 1; i < ac; i++)
		{
			int size = strlen(av[i]);
			for (int j = 0; j < size; j++)
			{
				if (isalpha(av[i][j]))
				{
					av[i][j] = toupper(av[i][j]);
				}
			}
			std::cout << av[i];
			if (i != size - 1)
				std::cout<<" ";
		}
		std::cout<<std::endl;
	}
}
