#include <stdio.h>
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a_number;
	int	*pointer_one;
	int	**pointer_two;
	int	***pointer_three;
	int	****pointer_four;
	int	*****pointer_five;
	int	******pointer_six;
	int	*******pointer_seven;
	int	********pointer_eight;

	pointer_one = &a_number;
	pointer_two = &pointer_one;
	pointer_three = &pointer_two;
	pointer_four = &pointer_three;
	pointer_five = &pointer_four;
	pointer_six = &pointer_five;
	pointer_seven = &pointer_six;
	pointer_eight = &pointer_seven;
	

	ft_ultimate_ft(&pointer_eight);
	printf("%d", a_number);
	return (0);
}
