#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 33;
	b = 5;
	printf("Antes %d, %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("Despues %d, %d\n", div, mod);
	return (0);
}
