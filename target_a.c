/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 22:42:49 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/03 11:35:12 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_target_high(t_stack **node, t_stack *stack)
{
	t_stack	*high;

	high = ft_high(&stack);
	(*node)->target_node = high;
}

int	ft_conditions_target_node_a(t_stack **node, t_stack **stack_b, int closest_smaller)
{
	if ((*node)->value < (*stack_b)->value)
		return (closest_smaller);
	if (closest_smaller < (*stack_b)->value)
	{	
		(*node)->target_node = *stack_b;
		closest_smaller = (*stack_b)->value;
	}
	return (closest_smaller);
}

void	ft_target_node_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;
	t_stack	*comp;
	int	closest_smaller;

	node = *stack_a;
	comp = *stack_b;
	while (node)
	{
		closest_smaller = -2147483648;
		while (comp)
		{
			closest_smaller = ft_conditions_target_node_a(&node, &comp, closest_smaller);
			comp = comp->next;
		}
		if (!node->target_node)
			ft_set_target_high(&node, *stack_b);
		comp = *stack_b;
		node = node->next;
	}
}
