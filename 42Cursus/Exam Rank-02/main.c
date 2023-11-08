#include <stdio.h>
void sort_int_tab(int *tab, unsigned int size);

void	print_arr(int *tab, unsigned int size)
{
 	unsigned int i = 0;
 	while (i < size)
 	{
 		printf("%d, ", tab[i]);
 		++i;
 	}
 	printf("\n");
}

int		main(void)
	{
	int tab[] = { 5, 5, 3, -2, 1, 0 };
	unsigned int size = sizeof(tab) / sizeof(*tab);

	print_arr(tab, size);
	sort_int_tab(tab, size);
	print_arr(tab, size);
}
