#include "../../inc/push_swap.h"

void	ft_order_three(t_stack **head)
{
	t_stack *temp;
	t_stack *temp_plus;
	
	temp = *head;
	temp_plus = temp->next;
	
	ft_indexation(*head);
	if (temp->index == 2 && temp_plus->index == 1)
		ft_sa(head);
	else if (temp->index == 2 && temp_plus->index == 3)
		ft_rra(head);
	else if (temp->index == 3 && temp_plus->index == 1)
		ft_ra(head);
	else if (temp->index == 3 && temp_plus->index == 2)
	{
		ft_sa(head);
		ft_rra(head);
	}
	else if (temp->index == 1 && temp_plus->index == 3)
	{
		ft_sa(head);
		ft_ra(head);
	}
}