#include<unistd.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	int numero;
	char src[] = "ajkJ1930AJajskLAKl";


	numero = ft_str_is_alpha(&src[0]);

	if(numero == 1)
		write(1, "alfabeticos", 11);
	if(numero == 0)	
		write(1, "no alfabeticos", 14);
	return (0);
}
