/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:43:47 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/25 22:41:45 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_in_order(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;
	int	i;
	int	j;
	int	median;
	t_stack *tmp;
	t_stack	*right_node;

	i = (*stack_a)->cost;
	j = 0;
	right_node = (*stack_a)->next;
	stack_size = ft_stack_size(stack_a);
	median = stack_size / 2;
	tmp = *stack_a;
	if (median % 2 != 0)
		median += 1;
	while (tmp)
	{
		if (tmp->cost < right_node->cost)
			right_node = tmp;
		tmp = tmp->next;
		j++;
	}
	if (j < median)
	{
		while (i == 0)
		{
			ft_rotate_a(stack_a);
			i--;
		}
	}
	else if (j > median)
	{
		while (i == 0)
		{	
			ft_reverse_rotate_a(stack_a);
			i--;
		}
		ft_reverse_rotate_a(stack_a);
	}
	ft_push_a(stack_a, stack_b);
}
