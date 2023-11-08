#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main (void)
{
	char s1[] = {"1tring"};
	char s2[] = {"2tring"};
	int	result;

	printf("The first array is = %s\n", s1);
	printf("The second array is = %s\n", s2);
	result = ft_strcmp(s1, s2);
	printf("My result is = %d\n", result);
	result = strcmp(s1, s2);
	printf("Library result is = %d\n", result);

	char s3[] = {"2tring"};
	char s4[] = {"1tring"};

	printf("The first array is = %s\n", s3);
	printf("The second array is = %s\n", s4);
	result = ft_strcmp(s3, s4);
	printf("My result is = %d\n", result);
	result = strcmp(s3, s4);
	printf("Library result is = %d\n", result);

	char s5[] = {"string"};
	char s6[] = {"string"};

	printf("The first array is = %s\n", s5);
	printf("The second array is = %s\n", s6);
	result = ft_strcmp(s5, s6);
	printf("My result is = %d\n", result);
	result = strcmp(s5, s6);
	printf("Library result is = %d\n", result);

	char s7[] = {"string"};
	char s8[] = {"string "};

	printf("The first array is = %s\n", s7);
	printf("The second array is = %s\n", s8);
	result = ft_strcmp(s7, s8);
	printf("My result is = %d\n", result);
	result = strcmp(s7, s8);
	printf("Library result is = %d\n", result);

	return (0);	
}

