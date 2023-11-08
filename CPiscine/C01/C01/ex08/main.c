#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

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

	len = 7;
	mytab[0] = 9933;
	mytab[1] = 17;
	mytab[2] = 92;
	mytab[3] = 3;
	mytab[4] = 23;
	mytab[5] = 15;
	mytab[6] = 34;
	print_array(mytab, len);
	ft_sort_int_tab(mytab, len);
	print_array(mytab, len);
}
