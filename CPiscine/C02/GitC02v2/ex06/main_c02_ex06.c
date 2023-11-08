#include<unistd.h>

int ft_str_is_printable(char *str);

int main(void)
{
	int numero;
	char src[] = "ASDFF  ___: AiSDF";

	numero = ft_str_is_printable(&src[0]);

	if(numero == 1)
		write(1, "printable", 9);
	if(numero == 0)	
		write(1, "no printable", 12);
	return (0);
}
