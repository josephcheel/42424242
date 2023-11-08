#include <stdio.h>
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 42;
	printf("Antes %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("Despues %d, %d\n", a, b);
	return (0);
}
