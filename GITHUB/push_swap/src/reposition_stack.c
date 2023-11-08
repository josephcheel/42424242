#include "../inc/push_swap.h"

void	ft_reposition_stack(t_stack *head)
{
	t_stack *temp;
	int i;

	i = 1;
	temp = head;
	while (temp)
	{
		temp->pos = i;
		temp = temp->next;
		i++;
	}
}