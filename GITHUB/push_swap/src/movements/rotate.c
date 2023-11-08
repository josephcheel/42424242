#include "../../inc/push_swap.h"

void	ft_ra(t_stack **stack_a)
{
	t_stack	*temp_one;
	t_stack	*temp_two;
	t_stack	**rotate;

	if (!(*stack_a))
		return ;
	rotate = stack_a;
	temp_two = *rotate;
	temp_one = *stack_a;
	if (!temp_one->next)
		return ;

	temp_one = temp_one->next;
	*stack_a = temp_one;
	while (temp_one->next)
		temp_one = temp_one->next;
	temp_one->next = temp_two;
	temp_two->next = NULL;
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **stack_b)
{
	t_stack	*temp_one;
	t_stack	*temp_two;
	t_stack	**rotate;

	if (!(*stack_b))
		return ;
	rotate = stack_b;
	temp_two = *rotate;
	temp_one = *stack_b;
	if (!temp_one->next || !temp_one)
		return ;

	temp_one = temp_one->next;
	*stack_b = temp_one;
	while (temp_one->next)
		temp_one = temp_one->next;
	temp_one->next = temp_two;
	temp_two->next = NULL;
	write(1, "rb\n", 3);
}


void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
	write(1, "rr\n", 3);
}
