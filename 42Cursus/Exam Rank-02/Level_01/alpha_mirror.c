#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	ltr;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ltr = argv[1][i];
			if ('A' <= argv [1][i] && 'Z' >= argv[1][i])
				ltr = 'Z' + 'A' - argv[1][i];
			if ('a' <= argv[1][i] && 'z' >= argv[1][i])
				ltr = 'z' + 'a' -argv[1][i];
			write(1, &ltr, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
