#include "../../inc/push_swap.h"

void	ft_move_up_stack_a(t_stack * stack_a ,t_stack *stack_b, int pos)
{
	int moves;

	moves = pos;
	while (moves != 1)
	{
		ft_ra(&stack_a);
		moves--;
	}
	ft_pb(&stack_a, &stack_b);
}

void	ft_move_down_stack_a(t_stack *stack_a, t_stack *stack_b, int pos, int size)
{
	int moves;

	moves = pos;
	while (moves != size)
	{
		ft_rra(&stack_a);
		moves++;
	}
	ft_pb(&stack_a, &stack_b);
}

void	ft_move_up_stack_b(t_stack **stack_a ,t_stack **stack_b, int pos)
{
	int moves;

	moves = pos;
	while (moves > 1)
	{
		ft_rb(stack_b);
		moves--;
	}
	ft_pa(stack_a, stack_b);
}

void	ft_move_down_stack_b(t_stack **stack_a, t_stack **stack_b, int pos, int size)
{
	int moves;

	moves = pos;
	while (moves <= size)
	{
		ft_rrb(stack_b);
		moves++;
	}
	ft_pa(stack_a, stack_b);
}

void	ft_search_uppermost(t_data *data, t_stack *stack)
{
	t_stack *temp;

	temp = stack;
	data->uppermost_index_pos = 0;
	while (temp && data->uppermost_index_pos == 0)
	{
		// printf("INDEX\t\t: %d\nCHUNCK_INDEX_MIN\t: %d\nCHUNCK_INDEX_MAX\t: %d\n", temp->index,  data->chunck_index_min, data->chunck_index_max);
		if (temp->index >= data->chunck_index_min * data->chunck - data->chunck 
			&& temp->index <= data->chunck_index_max * data->chunck)
		{
			data->uppermost_index_pos = temp->pos; // CAMBIARA NOTACION
			// printf("FOUND %d AT UPPER IN POS %d\n", data->uppermost_index, temp->pos);
			return ;
		}
		temp = temp->next;
	}
}

void	ft_search_lowest(t_data *data, t_stack *stack)
{
	int index;
	t_stack *temp;

	 index = data->size; //- data->index + 1;
	while (index > 0)
	{
		temp = ft_find_pos(stack, index);
		if (temp->index >= data->chunck_index_min * data->chunck - data->chunck 
			&& temp->index <= data->chunck_index_max * data->chunck)
		{
				data->lowest_index_pos = temp->pos; // CAMBIARA NOTACION
				// printf("FOUND %d AT LOWEST IN POS %d\n", data->lowest_index, temp->pos);
				return ;
		}
		index--;
	}
}

void	ft_move_nbr(t_data *data, t_stack **stack_a, t_stack **stack_b)
{
	int max;
	int moves;
	int up_or_down; // 0 == UP // 1 == DOWN
	// t_stack *temp;

	data->size = ft_listsize(*stack_a);
	data->cost_upper = data->uppermost_index_pos;
	data->cost_lowest =  data->size - data->lowest_index_pos + 1;
	// printf("SIZE %d\n", data->size);
	// printf("upper index: %d		lowest index: %d\n", data->uppermost_index_pos, data->lowest_index_pos);
	// printf("COST LOWEST %d COST HIGHEST %d\n", data->cost_lowest, data->cost_upper);
	// printf("UPPER :%d\nLOWEST :%d\n", data->cost_upper, data->cost_lowest);
	if (data->cost_upper < data->cost_lowest)
	{

		moves = data->cost_upper;
		up_or_down = 0;
		max = 1;
	}
	else
	{
		moves = data->cost_lowest;
		up_or_down = 1;
		max = 0;
	}
	while (moves > max)
	{
		// printf("MOVES %d\n", moves);
		if (up_or_down == 0)
			ft_ra(stack_a);
		else
			ft_rra(stack_a);
		moves--;
	}
	ft_pb(stack_a, stack_b);
	if (data->lowest_index_pos > 1)
	{
		if (data->insert_up == 0)
			data->insert_up = 1;
		else if (data->insert_up == 1)
		{
			ft_rb(stack_b);
			data->insert_up = 0;
		}
	}
	return ;
	// data->lowest_index = 0;
	// ft_pb(&temp, &stack_b);
}

void	ft_return_ordered_chunck(t_data *data,  t_stack *stack_a, t_stack *stack_b)
{
	int i = 1;
	

	// i = 0;
	// ft_printlist(*stack_b, "STACK_B");
	// printf("INDEX: %d, CHUNCKINDESMIN: %d, CHUNKCINDEXMAX: %d\n", data->index, data->chunck_index_min, data->chunck_index_max);
	// int	index;
	// int	chunck;
	// int insert_up;
	// int cost_upper;
	// int	chunck_max;
	// int cost_lowest;
	// int	lowest_index_pos;
	// int	uppermost_index_pos;
	// int	chunck_index_min;
	// int	chunck_index_max;);
	// printf("HOLA");
	ft_reposition_stack(stack_b);
	ft_indexation(stack_b);
	// printf("%d", data->index);
	data->size =  ft_listsize(stack_b);
	data->index = data->size;
	while (data->index > 0 && i > 0)
	{
		// printf("%d\n", data->index);
		
		ft_reposition_stack(stack_b);
		data->size =  ft_listsize(stack_b);
		i = ft_pos_of_index(stack_b, data->index);
		 
		// temp = ft_find_index(stack_b, data->index);
		// ft_pos_of_index(stack_b, data->index);

		// ft_reposition_stack(temp);
		// printf("%d", temp->pos);
		// 	// return ;
		
		// printf("POS: %d DATAINDEX: %d TEMPINDEX %d\n", temp->pos, data->index, temp->index);
		// printf("INDEX BUSCADO: %d EN POSICION %d\n", data->index, i);
		// printf("IIII %d			%d\n", data->index, i);
		// if (i > 50)
		// 	printf("IIII %d\n", i);

		if (i > data->size/2)
			ft_move_down_stack_b(&stack_a, &stack_b, i, data->index);
		else if (i <= data->size/2)
			ft_move_up_stack_b(&stack_a, &stack_b, i);
		data->index--;
	}
	return ;
	// while ()
	// {


	// }
}

void	ft_order_hundred(t_stack *stack_a, t_stack *stack_b)
{
	t_data data;
	
	data.chunck = 15; //20 FOR 100 // 45 FOR 500

	data.chunck_index_min = 1;
	data.chunck_index_max = 1;
	data.size = ft_listsize(stack_a);
	data.chunck_max = data.size/data.chunck;
	if (data.size % data.chunck != 0)
		data.chunck_max++;
	// printf("SIZE\t:\t%d\n", data.size);
	data.index = 1;
	data.insert_up = 0;
	while (!ft_is_sorted(stack_a))
	{
		// printf("Cunck_cycles\t:\t%d\n", chunck_cycles);
		while (data.chunck_index_max <= data.chunck_max)
		{
			// printf("					INDEX: %d CHUNCK INDEX: %d\n", data.index, data.chunck_index_max * data.chunck);
			while (data.index <= data.chunck_index_max * data.chunck)
			{
			
				data.lowest_index_pos = 0;
				data.uppermost_index_pos = 0;
				ft_reposition_stack(stack_a);
				data.size = ft_listsize(stack_a);
				ft_search_uppermost(&data, stack_a);
				ft_search_lowest(&data, stack_a);
				ft_move_nbr(&data, &stack_a, &stack_b);
				data.index++;
			}
			data.chunck_index_max++;
			// ft_reposition_stack(stack_b);
			// printf("PPPP%d", stack_b->pos);
			// int i = ft_pos_of_index(stack_b, 20);
		 	// printf("AJDA%d\n", i);
		}
		ft_return_ordered_chunck(&data, stack_a, stack_b);
		return ;
	}
}


// void	ft_order_hundred(t_stack *stack_a, t_stack *stack_b)
// {
// 	int	size;
// 	int cycles;
// 	int current_cycle;
// 	t_stack *temp;

// 	temp = NULL;
// 	size = ft_listsize(stack_a);
// 	cycles = size / 10;
// 	if (size % 10 != 0)
// 		cycles++;
// 	while (cycles > 0)
// 	{

// 		ft_reposition_stack(stack_a);
// 		current_cycle = 10;
// 		if (size < 10)
// 			current_cycle = size;
// 		// printf("Current Cycle: %d\n", current_cycle);
// 		printf("cycles\t\t:\t%d\nCurrentcycles\t:\t%d\nSize\t\t:\t%d\n", cycles, current_cycle, size);
// 		while (1 <= current_cycle)
// 		{
// 			temp = ft_find_index(stack_a, current_cycle * cycles);
// 			if (cycles > 1)
// 			{	
// 				while (!temp)
// 				{
// 					// ft_reposition_stack(stack_a);
// 					//printf("HOLA1");
// 					temp = ft_find_index(stack_a, current_cycle * cycles);
// 					current_cycle--;
					
// 				}
// 			}
// 			else if (cycles == 1)
// 			{
				
// 				// printf("Current Cycle: %d\n", current_cycle);
// 				// printf("Big Cycle: %d\n", cycles);
// 				// while (!temp)
// 				// {
// 					// ft_reposition_stack(stack_a);
// 					temp = ft_find_index(stack_a, current_cycle);
// 					current_cycle--;
					
// 					// printf("HOLA6");
// 					// return ;
// 				// }
// 				//return ;
// 			}
// 			if (temp->pos > size/2)
// 				ft_go_up_stack_a(temp, stack_b, size);
// 			else
// 				ft_go_down_stack_a(temp, stack_b, temp->pos, size);
// 			current_cycle--;
// 			// printf("HOLA");
// 		}
// 		cycles--;
// 		// printf("HOLA");
// 	}
// }