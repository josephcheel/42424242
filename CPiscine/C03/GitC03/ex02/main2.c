#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main (void)
{
	char s1[] = {"1tring"};
	char s2[20] = {"est"};
	char s3[20] = {"est"};
	char * result;
	char * result2;

	printf("The first array is = %s\n", s1);
	printf("The second array is = %s\n", s2);
	result = ft_strcat(s2, s1);
	printf("My result is = %s\n", result);
	result2 = strcat(s3, s1);
	printf("Library result is = %s\n", result2);


	return (0);	
}

