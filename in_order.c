/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:10:53 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/26 20:35:59 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while(tmp)
	{
		printf("value : %d, cost : %d, target : %d\n", tmp->value, tmp->cost, tmp->target_node->value);
		tmp = tmp->next;
	}
}

void	ft_print_stack_b(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while(tmp)
	{
		printf("value : %d, cost : %d\n", tmp->value, tmp->cost);
		tmp = tmp->next;
	}
}

void	ft_blind_pushb(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;
	int	i;

	i = 0;
	stack_size = ft_stack_size(stack_a);
	ft_push_a(stack_a, stack_b);
	if (stack_size > 4)
		ft_push_a(stack_a, stack_b);
	while (i < 6)
	{
		ft_find_cost(stack_a);
		ft_find_cost(stack_b);
		ft_target_node(stack_a, stack_b);
		ft_final_cost(stack_a);
		printf("stack_a :\n\n");
		ft_print_stack(stack_a);
		printf("stack_b :\n\n");
		ft_print_stack_b(stack_b);
		ft_stack_in_order(stack_a, stack_b);
		i++;
	}
}

t_stack	*ft_low(t_stack **stack_a)
{
	t_stack *tmp;
	t_stack *node_next;
	t_stack	*low;
	
	tmp = *stack_a;
	node_next = (*stack_a)->next;
	while (tmp)
	{
		if (tmp->value < node_next->value)
		{
			low = tmp;
		}
		tmp = tmp->next;
	}
	return (low);
}

t_stack	*ft_high(t_stack **stack_a)
{
	t_stack *tmp;
	t_stack *node_next;
	t_stack	*high;
	
	tmp = *stack_a;
	node_next = (*stack_a)->next;
	while (tmp)
	{
		if (tmp->value > node_next->value)
		{
			high = tmp;
		}
		tmp = tmp->next;
	}
	return (high);
}

void	ft_set_target_low_high(t_stack **low, t_stack **high)
{
	
	(*low)->target_node = *high;
}

int	ft_conditions_target_node(t_stack **node, t_stack **node_next, int res_tmp)
{
	int	res;
	
	res = (*node)->value - (*node_next)->value;

	if (res_tmp == -1 || (res < res_tmp && res > 0))
	{
		(*node)->target_node = *node_next;
	}
	return (res);
}

void	ft_target_node(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;
	t_stack	*comp;
	int	res_tmp;
	t_stack	*low;
	t_stack	*high;

	node = *stack_a;
	comp = *stack_b;
	low = ft_low(stack_a);
	high = ft_high(stack_a);
	while (node)
	{
		node->target_node = *stack_b;
		res_tmp = -1;
		if (node == low || node == high)
		{
			ft_set_target_low_high(&low, &high);
		}
		else
		{
			while (comp)
			{
				res_tmp = ft_conditions_target_node(&node, &comp, res_tmp);
				comp = comp->next;
			}
		}
		comp = *stack_b;
		node = node->next;
	}
}

