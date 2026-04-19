/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:10:53 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/19 20:34:05 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_size(t_stack **stack_a)
{
	int	i;
	t_stack	*tmp;

	tmp = *stack_a;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}	

void	ft_blind_pushb(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;

	stack_size = ft_stack_size(stack_a);
	ft_push_a(stack_a, stack_b);
	if (stack_size > 4)
		ft_push_a(stack_a, stack_b);
	ft_find_cost(stack_a, stack_b);
}

void	find_cost(t_stack **stack_a,int stack_size)
{
	int	median;
	t_stack	*node;

	stack_size = ft_stack_size;
	median = stack_size/2;         
	node = *stack_a;

	while (node)
	{
		while (
	}
}

void	ft_find_target_node(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;

	node = *stack_a;
	while(node)
	{
		if ((*stack_a)->value < (*stack-b)->value)
	}
}
