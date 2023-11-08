#include<unistd.h>
#include<string.h>
#include<stdio.h>

char	*ft_strncat(char *s1, char *s2, unsigned int nb);

int main (void)
{
	char *src;
	char dest[10] = "HolaD";
	src = "HolaS";

	printf("%s\n",ft_strncat(dest, src, 3));
	//printf("%s\n",strncat(dest, src, 3));
}
