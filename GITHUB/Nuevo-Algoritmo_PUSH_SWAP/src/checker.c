#include "../inc/push_swap.h"

void	ft_numarg(int ac, char **av)
{
	int	i;
	int	nbr;

	nbr = 0;
	i = 1;
	while (i < ac)
	{
		while (av[i][nbr])
		{
			if (!(ft_isdigit(av[i][nbr]) || av[i][0] == '-'))
			{
				write(2, "Error\n", 7);
				exit(EXIT_FAILURE);
				//error_param();
			}
			nbr++;
		}
		nbr = 0;
		i++;
	}

}

void ft_is_doubled(t_stack *stack_a)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = stack_a;
	temp2 = stack_a;
	while (temp)
	{
		temp2 = temp2->next;
		while (temp2)
		{
			//printf("temp: %d temp2 :%d\n", temp->value, temp2->value);
			if (temp->value == temp2->value)
			{
				//free list 
				write(2, "Error\n", 7);
				exit(EXIT_FAILURE);
			}
			temp2 = temp2->next;
		}
		temp = temp->next;
		temp2 = temp;
	}
}

int ft_is_sorted(t_stack *stack_a)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = stack_a;
	temp2 = stack_a;
	// if (temp2->next)
	// 	temp2 = temp2->next;	

	while (temp2->next)
	{

		temp2 = temp->next;
		//printf("temp: %d temp2: %d\n", temp->value, temp2->value);
		if (temp->value > temp2->value)
		{
			//write(2, "Not Odered\n", 13);
			return (0); 
			//free everything?? Programs continues as normally
		
		}
		temp = temp->next;
	}
	return (1);
}

void	ft_checker(t_stack *stack_a)
{
	ft_is_doubled(stack_a);
	if (ft_is_sorted(stack_a))
		exit(EXIT_FAILURE);	//Free everything?
	// NUMBERS NOT MAX_INT MIN_INT
}
