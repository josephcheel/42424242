#include "../../inc/push_swap.h"

void	ft_rra(t_stack **stack_a)
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

	while (temp_one->next)
		temp_one = temp_one->next;
	while (temp_two->next != temp_one)
		temp_two = temp_two->next;
	temp_two->next = NULL;
	temp_one->next = *stack_a;
	*stack_a = temp_one;

	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **stack_b)
{
	t_stack	*temp_one;
	t_stack	*temp_two;
	t_stack	**rotate;

	if (!(*stack_b))
		return ;
	rotate = stack_b;
	temp_two = *rotate;
	temp_one = *stack_b;
	if (!temp_one->next)
		return ;

	while (temp_one->next)
		temp_one = temp_one->next;
	while (temp_two->next != temp_one)
		temp_two = temp_two->next;
	temp_two->next = NULL;
	temp_one->next = *stack_b;
	*stack_b = temp_one;

	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
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

	while (temp_one->next)
		temp_one = temp_one->next;
	while (temp_two->next != temp_one)
		temp_two = temp_two->next;
	temp_two->next = NULL;
	temp_one->next = *stack_a;
	*stack_a = temp_one;
	if (!(*stack_b))
		return ;
	rotate = stack_b;
	temp_two = *rotate;
	temp_one = *stack_b;
	if (!temp_one->next)
		return ;

	while (temp_one->next)
		temp_one = temp_one->next;
	while (temp_two->next != temp_one)
		temp_two = temp_two->next;
	temp_two->next = NULL;
	temp_one->next = *stack_b;
	*stack_b = temp_one;

	write(1, "rrr\n", 4);
}
