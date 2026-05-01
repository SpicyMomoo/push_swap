/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:45:28 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/01 15:05:04 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_cost(t_stack **stack)
{
	int	median;
	int	stack_size;
	t_stack	*node;
	int	i;

	i = 1;
	stack_size = ft_stack_size(stack);
	median = stack_size / 2;
	if (stack_size % 2 != 0)
		median += 1;
	node = *stack;
	while (node)
	{
		if (i <= median)
			node->cost = i - 1;
		if (i > median)
			node->cost = (stack_size - i) + 1;
		node = node->next;
		i++;
	}
}

void	ft_final_cost(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		tmp->cost += tmp->target_node->cost;
		tmp = tmp->next;
	}
}
