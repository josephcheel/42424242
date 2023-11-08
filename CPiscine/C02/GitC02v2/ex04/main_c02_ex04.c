#include<unistd.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	int numero;
	char src[] = "asdfadfdskdka";


	numero = ft_str_is_lowercase(&src[0]);

	if(numero == 1)
		write(1, "minusculas", 10);
	if(numero == 0)	
		write(1, "no minusculas", 13);
	return (0);
}
