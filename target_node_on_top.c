#include "push_swap.h"

void	ft_target_node_on_top_a(t_stack **stack, t_stack **smaller)
{
	t_stack	*tmp;
	int		indice;
	int		stack_size;
	int		median;

	tmp = *stack;
	indice = 0;
	stack_size = ft_stack_size(stack);
	median = stack_size / 2;
	if (stack_size % 2 != 0)
		median += 1;
	while (tmp)
	{
		if (tmp == *smaller)
			break ;
		indice++;
		tmp = tmp->next;
	}
	for_target_a(stack, indice, median, stack_size);
}

void	ft_target_node_on_top_b(t_stack **stack, t_stack **smaller)
{
	t_stack	*tmp;
	int		indice;
	int		stack_size;
	int		median;

	tmp = *stack;
	indice = 0;
	stack_size = ft_stack_size(stack);
	median = stack_size / 2;
	if (stack_size % 2 != 0)
		median += 1;
	while (tmp)
	{
		if (tmp == *smaller)
			break ;
		indice++;
		tmp = tmp->next;
	}
	for_target_b(stack, indice, median, stack_size);
}

void	for_target_b(t_stack **stack, int indice, int median, int stack_size)
{
	if (indice < median)
		while (indice-- > 0)
			ft_rotate_b(stack);
	else if (indice == stack_size - 1)
		ft_reverse_rotate_b(stack);
	else if (indice >= median)
		while (indice++ < stack_size)
			ft_reverse_rotate_b(stack);
}

void	for_target_a(t_stack **stack, int indice, int median, int stack_size)
{	
	if (indice < median)
		while (indice-- > 0)
			ft_rotate_a(stack);
	else if (indice == stack_size - 1)
		ft_reverse_rotate_a(stack);
	else if (indice >= median)
		while (indice++ < stack_size)
			ft_reverse_rotate_a(stack);
}
