/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:43:47 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/03 20:34:56 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_target_node_on_top_a(t_stack **stack, t_stack *smaller)
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
		if (tmp == smaller)
			break ;
		indice++;
		tmp = tmp->next;
	}
	if (indice < median)
		while (indice-- > 0)
			ft_rotate_a(stack);
	else if (indice == stack_size - 1)
		ft_reverse_rotate_a(stack);
	else if (indice >= median)
		while (indice++ < stack_size)
			ft_reverse_rotate_a(stack);
}

void	ft_target_node_on_top_b(t_stack **stack, t_stack *smaller)
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
		if (tmp == smaller)
			break ;
		indice++;
		tmp = tmp->next;
	}
	if (indice < median)
		while (indice-- > 0)
			ft_rotate_b(stack);
	else if (indice == stack_size - 1)
		ft_reverse_rotate_b(stack);
	else if (indice >= median)
		while (indice++ < stack_size)
			ft_reverse_rotate_b(stack);
}

void	ft_stack_in_order_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*small_cost;
	t_stack	*tmp;

	small_cost = *stack_a;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->cost < small_cost->cost)
			small_cost = tmp;
		tmp = tmp->next;
	}
	ft_target_node_on_top_a(stack_a, small_cost);
	ft_target_node_on_top_b(stack_b, small_cost->target_node);
	ft_push_a(stack_a, stack_b);
}

void	ft_stack_in_order_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*small_cost;

	small_cost = (*stack_b)->target_node;
	ft_target_node_on_top_a(stack_a, small_cost);
	ft_push_b(stack_b, stack_a);
}