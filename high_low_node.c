/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   high_low_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 22:48:22 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/03 19:31:07 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_low(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*node_next;
	t_stack	*low;

	tmp = *stack;
	low = tmp;
	node_next = (*stack)->next;
	while (node_next)
	{
		if (node_next->value < tmp->value)
		{
			low = node_next;
			tmp = node_next;
		}
		node_next = node_next->next;
	}
	return (low);
}

t_stack	*ft_high(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*node_next;
	t_stack	*high;

	tmp = *stack_a;
	high = tmp;
	node_next = (*stack_a)->next;
	while (node_next)
	{
		if (node_next->value > tmp->value)
		{
			high = node_next;
			tmp = node_next;
		}
		node_next = node_next->next;
	}
	return (high);
}
