#include<unistd.h>
#include<string.h>
#include<stdio.h>

char	*ft_strcat(char *s1, char *s2);

int main (void)
{
	char *src;
	char dest[15] = "HolaD";
	src = "HolaSrc";

	//printf("%s\n",ft_strcat(dest, src));
	printf("%s\n",strcat(dest, src));
}
