#include <unistd.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
	int len;
	int j;
	char c;

	len = 0;
	j = 0;
	if (argc == 2)
	{
		while(*argv[1])
		{
			c = argv[1][j];
			if (c >= 'a' || c <= 'z')
				len = c - 'a' + 1;  
			else if(c >= 'A' || c <= 'Z') 
				len = c  - 'A' + 1;  
			while (--len > 0)
			{
				write(1, &argv[1][j], 1);		
			}	
			j++;		
		}
	}
	write(1, "\n", 1);
}	
