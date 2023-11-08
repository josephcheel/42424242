#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack *stack_b = NULL;
	if (ac < 2)	 /// CUANTOS ARGUMENTOS TIENE QUE DARLO POR VALIDO 
		return (0);
	ft_numarg(ac, av);
	stack_a = ft_create_stack(ac,av);
	ft_checker(stack_a);
	
	ft_algorithm(&stack_a, &stack_b);
	return (0);
}
