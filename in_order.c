/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:10:53 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/25 22:32:00 by mduhoux          ###   ########.fr       */
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
	ft_find_cost(stack_a);
	ft_find_cost(stack_b);
	ft_target_node(stack_a, stack_b);
	ft_final_cost(stack_a);
	ft_stack_in_order(stack_a, stack_b);
}

void	ft_find_cost(t_stack **stack)
{
	int	median;
	int	stack_size;
	t_stack	*node;
	int	i;

	i = 0;
	stack_size = ft_stack_size(stack);
	median = stack_size / 2;
	if (median % 2 != 0)
		median += 1;
	node = *stack;
	while (node)
	{
		if (i < median)
			node->cost = i - 0;
		if (i >= median)
			node->cost = stack_size - i;
		node = node->next;
		i++;
	}
}

void	ft_conditions_target_node(t_stack **node, t_stack **comp, int res_tmp)
{
	int	res;

	if ((*comp)->value > (*node)->value)
	{
		res = (*comp)->value - (*node)->value;
		if (res < res_tmp)
		{
			(*node)->target_node = *comp;
		}
	}
	else if ((*comp)->value < (*node)->value)
	{
		res = (*node)->value - (*comp)->value;
		if (res < res_tmp)
		{
			(*node)->target_node = *comp;
		}
	}
	*comp = (*comp)->next; 
}

void	ft_target_node(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;
	t_stack	*comp;
	int	res_tmp;

	node = *stack_a;
	comp = *stack_b;
	while (node)
	{
		node->target_node = *stack_b;
		if (comp->value > node->value)
			res_tmp = comp->value - node->value;
		if (comp->value < node->value)
			res_tmp = node->value - comp->value;
		while (comp)
		{
			ft_conditions_target_node(&node, &comp, res_tmp);
		}
		comp = *stack_b;
		node = node->next;
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
