
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "linkedlist.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_data
{	
	
	int	size;
	int	index;
	int	chunck;
	int insert_up;
	int cost_upper;
	int	chunck_max;
	int cost_lowest;
	int	lowest_index_pos;
	int	uppermost_index_pos;
	int	chunck_index_min;
	int	chunck_index_max;
	
}t_data;

t_stack	*ft_create_stack(int ac,char **av);

void	ft_numarg(int ac, char **av);

void	ft_checker(t_stack *stack_a);
int		ft_is_sorted(t_stack *stack_a);
void	ft_is_doubled(t_stack *stack_a);
//===================MOVEMENTS=================//	

void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);

void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);

void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_a);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);

void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);

void	ft_indexation(t_stack *head);
void	ft_reposition_stack(t_stack *head);
int		ft_stacklen(t_stack *head);


void	ft_algorithm(t_stack **stack_a, t_stack **stack_b);
void	ft_order_two(t_stack **stack_a);
void	ft_order_three(t_stack **stack_a);
void	ft_order_four_or_five(t_stack **stack_a, t_stack **stack_b);
void	ft_order_hundred(t_stack *stack_a, t_stack *stack_b);
void	ft_to_stack_b_four(t_stack **stack_a, t_stack **stack_b, int num);


void	ft_go_up_stack_a(t_stack *stack_a, t_stack *stack_b, int pos);
void	ft_go_down_stack_a(t_stack *stack_a, t_stack *stack_b, int pos, int size);


//void	ft_error_param(void);
#endif
