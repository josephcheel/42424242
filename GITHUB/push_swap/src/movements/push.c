#include "../../inc/push_swap.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_b;

	temp_b = *stack_b;
	if (!temp_b)
		return ;
	ft_insert_at_head(stack_a, ft_create_new_node(temp_b->value));
	*stack_b = temp_b->next;
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	temp_a = *stack_a;
	
	if (!temp_a)
		return ;
	ft_insert_at_head(stack_b, ft_create_new_node(temp_a->value));
	*stack_a = temp_a->next;
	write(1, "pb\n", 3);
}
