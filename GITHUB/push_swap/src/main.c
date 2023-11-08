#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack *stack_b = NULL;
	if (ac < 2)	 /// CUANTOS ARGUMENTOS TIENE QUE DARLO POR VALIDO 
		return (0);
	ft_numarg(ac, av);
	stack_a = ft_create_stack(ac,av);
	//stack_b = ft_create_stack(ac,av);
	//stack_b = ft_create_stack(ac, av);
	ft_checker(stack_a);
	// ft_pa(&stack_a, &stack_b);
	// ft_printlist(stack_a, "START A");
	// ft_printlist(stack_b, "START B");
	// ft_reposition_stack(stack_a);
	// ft_printpos(stack_a, "POS");
	
	ft_algorithm(&stack_a, &stack_b);
	//t_stack *temp = ft_create_new_node(2022);
	//ft_insert_at_head(&stack_a, temp);
	
	// ft_printlist(stack_a, "A");
	// ft_printlist(stack_b, "B");
	return (0);
}

// ft_printlist(stack_a, "stack_a_ Before");
	// ft_printlist(stack_b, "stack_b Before");
	
	
	// ft_printlist(stack_a, "stack_a_ After RRA");
	// ft_printlist(stack_a, "stack_a_ After RA");
	// ft_printlist(stack_b, "stack_b After");