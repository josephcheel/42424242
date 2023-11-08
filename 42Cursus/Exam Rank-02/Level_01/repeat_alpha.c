#include <unistd.h>

int main(int ac, char **av)
{
	int letter = 0;
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
		
				if (av[1][i] <= 'z' && av[1][i] >= 'a')
					letter = av[1][i] - 96;
				else if (av[1][i] <= 'Z' && av[1][i] >= 'A')					
					letter = av[1][i] - 64;
				else
					letter = 1;
				while (letter > 0)
				{
					write (1, &av[1][i], 1);
					letter--;
				}
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
