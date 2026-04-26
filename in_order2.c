/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:43:47 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/26 19:10:40 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_target_node_on_top(t_stack **stack_a, t_stack **stack_b)
{	
	t_stack	*tmp;
	t_stack	*cmp;
	int	stack_size_b;
	int	median_b;
	int	i;
	
	i = 0;
	cmp = *stack_b;
	tmp = *stack_a;
	stack_size_b = ft_stack_size(stack_b);
	median_b = stack_size_b / 2;
	if (median_b % 2 != 0)
		median_b += 1;
	while (tmp->target_node->value == cmp->value)
	{
		i++;
		cmp = cmp->next;
	}
	if (i < median_b)
	{
		while (i == 0)
		{
			ft_rotate_b(stack_b);
			i--;		
		}
	}
	else if (i > median_b)
	{
		while (i != median_b + 1)
		{
			ft_reverse_rotate_b(stack_b);
			i++;		
		}
	}
}

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
	right_node = *stack_a;
	stack_size = ft_stack_size(stack_a);
	median = stack_size / 2;
	tmp = *stack_a;
	if (median % 2 != 0)
		median += 1;
	while (tmp)
	{
		if (tmp->cost < right_node->cost)
		{
			right_node = tmp;
			i = j;
		}
		tmp = tmp->next;
		j++;
	}
	if (i <= median)
	{
		while (i != 0)
		{
			ft_rotate_a(stack_a);
			i--;
		}
	}
	else if (i > median)
	{
		while (i != stack_size + 1)
		{	
			ft_reverse_rotate_a(stack_a);
			i++;
		}
	}
	ft_target_node_on_top(stack_a, stack_b);
	ft_push_a(stack_a, stack_b);
}
