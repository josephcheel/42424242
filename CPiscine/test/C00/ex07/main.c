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
	int	mytab[7];
	int	len;
	int	i;

	len = 7;
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
