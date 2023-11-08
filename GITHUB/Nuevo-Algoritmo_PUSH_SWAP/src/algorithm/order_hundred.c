#include "../../inc/push_swap.h"

// void	ft_move_up_stack_a(t_stack * stack_a ,t_stack *stack_b, int pos)
// {
// 	int moves;

// 	moves = pos;
// 	while (moves != 1)
// 	{
// 		ft_ra(&stack_a);
// 		moves--;
// 	}
// 	ft_pb(&stack_a, &stack_b);
// }

// void	ft_move_down_stack_a(t_stack *stack_a, t_stack *stack_b, int pos, int size)
// {
// 	int moves;

// 	moves = pos;
// 	while (moves != size)
// 	{
// 		ft_rra(&stack_a);
// 		moves++;
// 	}
// 	ft_pb(&stack_a, &stack_b);
// }

// void	ft_move_up_stack_b(t_stack **stack_a ,t_stack **stack_b, int pos)
// {
// 	int moves;

// 	moves = pos;
// 	while (moves > 1)
// 	{
// 		ft_rb(stack_b);
// 		moves--;
// 	}
// 	ft_pa(stack_a, stack_b);
// }

// void	ft_move_down_stack_b(t_stack **stack_a, t_stack **stack_b, int pos, int size)
// {
// 	int moves;

// 	moves = pos;
// 	while (moves <= size)
// 	{
// 		ft_rrb(stack_b);
// 		moves++;
// 	}
// 	ft_pa(stack_a, stack_b);
// }

// void	ft_search_uppermost(t_data *data, t_stack *stack)
// {
// 	t_stack *temp;

// 	temp = stack;
// 	data->uppermost_index_pos = 0;
// 	while (temp && data->uppermost_index_pos == 0)
// 	{
// 		// printf("INDEX\t\t: %d\nCHUNCK_INDEX_MIN\t: %d\nCHUNCK_INDEX_MAX\t: %d\n", temp->index,  data->chunck_index_min, data->chunck_index_max);
// 		if (temp->index >= data->chunck_index_min * data->chunck - data->chunck 
// 			&& temp->index <= data->chunck_index_max * data->chunck)
// 		{
// 			data->uppermost_index_pos = temp->pos; // CAMBIARA NOTACION
// 			// printf("FOUND %d AT UPPER IN POS %d\n", data->uppermost_index, temp->pos);
// 			return ;
// 		}
// 		temp = temp->next;
// 	}
// }

// // void	ft_search_lowest(t_data *data, t_stack *stack)
// // {
// // 	int index;
// // 	t_stack *temp;

// // 	 index = data->size; //- data->index + 1;
// // 	while (index > 0)
// // 	{
// // 		temp = ft_find_pos(stack, index);
// // 		if (temp->index >= data->chunck_index_min * data->chunck - data->chunck 
// // 			&& temp->index <= data->chunck_index_max * data->chunck)
// // 		{
// // 				data->lowest_index_pos = temp->pos; // CAMBIARA NOTACION
// // 				// printf("FOUND %d AT LOWEST IN POS %d\n", data->lowest_index, temp->pos);
// // 				return ;
// // 		}
// // 		index--;
// // 	}
// // }

// void	ft_move_nbr(t_data *data, t_stack **stack_a, t_stack **stack_b)
// {
// 	int max;
// 	int moves;
// 	int up_or_down; // 0 == UP // 1 == DOWN
// 	// t_stack *temp;

// 	data->size = ft_listsize(*stack_a);
// 	data->cost_upper = data->uppermost_index_pos;
// 	data->cost_lowest =  data->size - data->lowest_index_pos + 1;
// 	// printf("SIZE %d\n", data->size);
// 	// printf("upper index: %d		lowest index: %d\n", data->uppermost_index_pos, data->lowest_index_pos);
// 	// printf("COST LOWEST %d COST HIGHEST %d\n", data->cost_lowest, data->cost_upper);
// 	// printf("UPPER :%d\nLOWEST :%d\n", data->cost_upper, data->cost_lowest);
// 	if (data->cost_upper < data->cost_lowest)
// 	{

// 		moves = data->cost_upper;
// 		up_or_down = 0;
// 		max = 1;
// 	}
// 	else
// 	{
// 		moves = data->cost_lowest;
// 		up_or_down = 1;
// 		max = 0;
// 	}
// 	while (moves > max)
// 	{
// 		// printf("MOVES %d\n", moves);
// 		if (up_or_down == 0)
// 			ft_ra(stack_a);
// 		else
// 			ft_rra(stack_a);
// 		moves--;
// 	}
// 	ft_pb(stack_a, stack_b);
// 	if (data->lowest_index_pos > 1)
// 	{
// 		if (data->insert_up == 0)
// 			data->insert_up = 1;
// 		else if (data->insert_up == 1)
// 		{
// 			ft_rb(stack_b);
// 			data->insert_up = 0;
// 		}
// 	}
// 	return ;
// 	// data->lowest_index = 0;
// 	// ft_pb(&temp, &stack_b);
// }

// void	ft_return_ordered_chunck(t_data *data,  t_stack *stack_a, t_stack *stack_b)
// {
// 	int i = 1;
	

// 	// i = 0;
// 	// ft_printlist(*stack_b, "STACK_B");
// 	// printf("INDEX: %d, CHUNCKINDESMIN: %d, CHUNKCINDEXMAX: %d\n", data->index, data->chunck_index_min, data->chunck_index_max);
// 	// int	index;
// 	// int	chunck;
// 	// int insert_up;
// 	// int cost_upper;
// 	// int	chunck_max;
// 	// int cost_lowest;
// 	// int	lowest_index_pos;
// 	// int	uppermost_index_pos;
// 	// int	chunck_index_min;
// 	// int	chunck_index_max;);
// 	// printf("HOLA");
// 	ft_reposition_stack(stack_b);
// 	ft_indexation(stack_b);
// 	// printf("%d", data->index);
// 	data->size =  ft_listsize(stack_b);
// 	data->index = data->size;
// 	while (data->index > 0 && i > 0)
// 	{
// 		// printf("%d\n", data->index);
		
// 		ft_reposition_stack(stack_b);
// 		data->size =  ft_listsize(stack_b);
// 		i = ft_pos_of_index(stack_b, data->index);
		 
// 		// temp = ft_find_index(stack_b, data->index);
// 		// ft_pos_of_index(stack_b, data->index);

// 		// ft_reposition_stack(temp);
// 		// printf("%d", temp->pos);
// 		// 	// return ;
		
// 		// printf("POS: %d DATAINDEX: %d TEMPINDEX %d\n", temp->pos, data->index, temp->index);
// 		// printf("INDEX BUSCADO: %d EN POSICION %d\n", data->index, i);
// 		// printf("IIII %d			%d\n", data->index, i);
// 		// if (i > 50)
// 		// 	printf("IIII %d\n", i);

// 		if (i > data->size/2)
// 			ft_move_down_stack_b(&stack_a, &stack_b, i, data->index);
// 		else if (i <= data->size/2)
// 			ft_move_up_stack_b(&stack_a, &stack_b, i);
// 		data->index--;
// 	}
// 	return ;
// 	// while ()
// 	// {


// 	// }
// }

void	ft_calculate_cost(t_data *data, t_stack *stack_b)
{
	int cost_a;
	int cost_b;
	t_stack *tmp_b;
	t_stack *target;
	
	cost_a = 0;
	cost_b = 0;
	while (stack_b)
	{
		tmp_b = stack_b;
		target = tmp_b->target;
		if (tmp_b->pos > data->size_b/2)
			cost_a = data->size_a - tmp_b->pos + 1;
		else if (tmp_b->pos <= data->size_b/2)
			cost_a = tmp_b->pos - 1;
		if (target->pos > data->size_a/2)
			cost_b = data->size_a;
		else if (target->pos <= data->size_a/2)
			cost_b = data->size_a - target->pos;
		stack_b->cost = cost_a + cost_b;
		stack_b = stack_b->next;
	}
}


void	ft_set_target(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp_b;
	int i;

	// int	highest;

	// highest = INT_MAX;
	tmp_b = *stack_b;
	// while (tmp_b)
	// {
	// 	tmp_a = *stack_a;
	// 	while (tmp_a)
	// 	{
			
	// 		if (tmp_a->index > tmp_b->index && (!tmp || tmp_a->index < tmp->index ))
	// 		{
	// 			// highest = tmp_a->index;
	// 			tmp_b->target = tmp_a;
	// 			printf("HOLA %d\n", tmp->value);
	// 		}
	// 		printf("HOLA %d\n", tmp->value);
	// 		if (tmp_b->target)
	// 			tmp = tmp_b->target;  
	// 		// printf("HOLA %d\n", tmp->value);
	// 		tmp_a = tmp_a->next;
	// 	}
	// // printf("HOLA %d\n", tmp->value);
	// 	if (tmp_b->target == NULL)
	// 		tmp_b->target = ft_find_index(*stack_a, 1);
	// 	tmp_b = tmp_b->next;
	// }

	while (tmp_b)
	{
		i = ft_listsize(*stack_a);
		while (i)
		{
			
			if (i < tmp_b->index)
				break ;
			tmp_b->target = ft_find_index(*stack_a, i);
			i--;
		}
		printf("INDEX: %d\n", i);
		if (i == 0)
		{
			tmp_b->target = ft_find_index(*stack_a, 1);
		}
		tmp_b = tmp_b->next;
	}
}

void	ft_refresh(t_data *data,t_stack *stack_a, t_stack *stack_b)
{
	ft_reposition_stack(stack_a);
	ft_reposition_stack(stack_b);
	data->size_a  = ft_listsize(stack_a);
	data->size_b  = ft_listsize(stack_b); 
}

void	ft_move(t_data *data, t_stack *stack_a, t_stack *stack_b)
{
	int up;
	int cost_a = 0;
	int cost_b = 0;	
	t_stack	*smallest;
	t_stack	*target;
	
	// ft_pa(&stack_a, &stack_b);
	// return ;
	ft_refresh(data, stack_a, stack_b);
	smallest = ft_find_smallest_cost(stack_b);
	printf("SMALLEST %d", smallest->value);
	target = smallest->target;
	data->moves_a = target->pos ;
	data->moves_b = smallest->pos;
	if (smallest->pos < data->size_b)
		data->up_a = 1;
	else	
		data->up_a = 0;
	if (target->pos < data->size_b)
		data->up_a = 1;
	else	
		data->up_a = 0;

	printf("\t\tMOVES A%d\n\t\tMOVES B%d\t", data->moves_a, data->moves_b);
	return ;
	while (data->moves_a && data->moves_b)
	{
		if (data->up_a == 1 && data->up_b == 1)
		{
			
			ft_rr(&stack_a, &stack_b);
			data->moves_a--;
			data->moves_b--;
		}
		else if (data->up_a == 0 && data->up_b == 0)
		{
			ft_rrr(&stack_a, &stack_b);
			data->moves_a--;
			data->moves_b--;
		}
	}
	return ;	
	up = 0;
	if (target->pos > data->size_a/2)
	{
		cost_b = data->size_a;
		up = 1;
	}
	else if (target->pos <= data->size_a/2)
		cost_b = data->size_a - target->pos + 1;

	while (cost_b)
	{
		if (up)
			ft_ra(&stack_a);
		else
			ft_rra(&stack_a);
		cost_b--;
	}
	up = 0;
	if (smallest->pos > data->size_b/2)
	{
		up = 1;
		cost_a = data->size_b - smallest->pos;
	}
	else if (smallest->pos <= data->size_b/2)
		cost_a = smallest->pos - 1;
	
	while (cost_a)
	{
		if (up)
			ft_rb(&stack_b);
		else
			ft_rrb(&stack_b);
		cost_a--;
	}
	ft_pa(&stack_a, &stack_b);
}



void	ft_order_hundred(t_stack *stack_a, t_stack *stack_b)
{
	t_data data;
	t_stack	*tmp;
	t_stack	*tmp2;

	int size;
	data.size_a = ft_listsize(stack_a);
	size = data.size_a;
	while (size-- > 3)
		ft_pb(&stack_a, &stack_b);
	ft_printindex(stack_a, "STACK A");
	ft_printindex(stack_b, "STACK B");
	return ;
	ft_order_three(&stack_a);
	ft_refresh(&data, stack_a, stack_b);
	while (data.size_b)
	{
		t_stack *tmp_b = stack_b;
		while (tmp_b)
		{
			printf("II %d\n", tmp_b->index);
			tmp_b = tmp_b->next;
		}
		return ;
		ft_set_target(&stack_a, &stack_b); // VA MAL
		tmp = stack_b;
		ft_printlist(stack_a, "STACK A");
		ft_printlist(stack_b, "STACK B");
		while (tmp)
		{	
			tmp2 = tmp->target;
			printf("%d\n", tmp2->value);
			tmp = tmp->next;
		}
		return ;
		// ft_calculate_cost(&data, stack_b);
		
		// ft_move(&data, stack_a, stack_b);
		// ft_printlist(stack_a, "STACK A");
		// ft_printlist(stack_b, "STACK B");
		ft_refresh(&data, stack_a, stack_b);
		return ;
	}
	return ;
}