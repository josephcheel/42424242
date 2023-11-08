#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

void	print_array(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len) {
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int	mytab[20];
	int	len;
	int	i;

	len = 20;
	i = 0;
	while (i < len)
	{
		mytab[i] = i + 1;
		i++;
	}
	print_array(mytab, len);
	ft_rev_int_tab(mytab, len);
	print_array(mytab, len);
}
