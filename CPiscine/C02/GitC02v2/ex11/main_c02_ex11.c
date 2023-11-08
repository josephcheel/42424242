#include<stdio.h>
#include<unistd.h>

void ft_putstr_non_printable(char *str);
int main (void)
{
	char cadena[] = "Hola Miguel\n";

	ft_putstr_non_printable(&cadena[0]);
}
