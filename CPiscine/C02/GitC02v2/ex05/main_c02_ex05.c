#include<unistd.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	int numero;
	char src[] = "ASDFFdgakASDF";


	numero = ft_str_is_uppercase(&src[0]);

	if(numero == 1)
		write(1, "mayusculas", 10);
	if(numero == 0)	
		write(1, "no mayusculas", 13);
	return (0);
}
