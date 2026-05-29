#include <iostream>
#include <cctype>
using namespace std;

int	strlen(string	a)
{
	int count = 0;

	while (a[count])
	{
		count++;
	}
	return (count);
}

int main(int ac , char **av)
{
	if (ac == 1)
		cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{		
		for (int i = 1; i < ac; i++)
		{
			int size = strlen(av[i]);
			for (int j = 0; j < size; j++)
			{
				if(isalpha(av[i][j]))
				{
					av[i][j] = toupper(av[i][j]);
				}
			}
			cout<<av[i];
			if (i != size - 1)
				cout<<" ";
		}
		cout<<endl;
	}
}
