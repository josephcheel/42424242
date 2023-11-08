#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{
	char s1[] = {"1tring"};
	char s2[20] = {"est"};
	char s3[20] = {"est"};

	char * result;
	char * result2;

	printf("The first array is = %s\n", s1);
	printf("The second array is = %s\n", s2);
	result = ft_strncat(s2, s1, 2);
	printf("My result copyint 2 is = %s\n", result);
	result2 = strncat(s3, s1, 2);
	printf("Library result copying 2 is = %s\n", result2);

	char s4[20] = {"est"};
	char s5[20] = {"est"};
	printf("The first array is = %s\n", s1);
	printf("The second array is = %s\n", s4);
	result = ft_strncat(s4, s1, 8);
	printf("My result copyint 8 is = %s\n", result);
	result2 = strncat(s5, s1, 8);
	printf("Library result copying 8 is = %s\n", result2);


	return (0);	
}

