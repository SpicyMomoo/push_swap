/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:59:18 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/03 20:03:00 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_target_low(t_stack **node, t_stack *stack)
{
	t_stack	*low;

	low = ft_low(&stack);
	(*node)->target_node = low;
}

int	ft_conditions_target_node_b(t_stack **node, t_stack **stack_a, int bigger_closer)
{
	if ((*node)->value > (*stack_a)->value)
		return (bigger_closer);
	if (bigger_closer > (*stack_a)->value)
	{
		(*node)->target_node = *stack_a;
		bigger_closer = (*stack_a)->value;
	}
	return (bigger_closer);
}

void	ft_target_node_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;
	t_stack	*comp;
	int	bigger_closer;

	node = *stack_b;
	comp = *stack_a;
	while (node)
	{
		bigger_closer = 2147483647;
		while (comp)
		{
			bigger_closer = ft_conditions_target_node_b(&node, &comp, bigger_closer);
			comp = comp->next;
		}
		if (!node->target_node)
			ft_set_target_low(&node, *stack_a);
		comp = *stack_a;
		node = node->next;
	}
}
