#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);;

int main (void)
{
	char s1[] = {"1tring"};
	char s2[] = {"2tring"};
	int	result;

	printf("The first array is = %s\n", s1);
	printf("The second array is = %s\n", s2);
	result = ft_strncmp(s1, s2, 3);
	printf("My result is = %d\n", result);
	result = strncmp(s1, s2, 3);
	printf("Library result is = %d\n", result);

	char s3[] = {"2tr3ng"};
	char s4[] = {"2tr4ng"};

	printf("The first array is = %s\n", s3);
	printf("The second array is = %s\n", s4);
	result = ft_strncmp(s3, s4, 2);
	printf("My result with 2 compared is = %d\n", result);
	result = strncmp(s3, s4, 2);
	printf("Library with 2 compared result is = %d\n", result);

	char s5[] = {"string"};
	char s6[] = {"string"};

	printf("The first array is = %s\n", s5);
	printf("The second array is = %s\n", s6);
	result = ft_strncmp(s5, s6, 8);
	printf("My result is = %d\n", result);
	result = strncmp(s5, s6, 8);
	printf("Library result is = %d\n", result);

	char s7[] = {"string"};
	char s8[] = {"string "};

	printf("The first array is = %s\n", s7);
	printf("The second array is = %s\n", s8);
	result = ft_strncmp(s7, s8, 8);
	printf("My result is = %d\n", result);
	result = strncmp(s7, s8, 8);
	printf("Library result is = %d\n", result);

	return (0);	
}

