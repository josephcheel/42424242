#include<unistd.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	int numero;
	char src[] = "123418296389";


	numero = ft_str_is_numeric(&src[0]);

	if(numero == 1)
		write(1, "numerico", 8);
	if(numero == 0)	
		write(1, "no numerico", 11);
	return (0);
}
