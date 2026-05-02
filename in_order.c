/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:10:53 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/02 22:12:07 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while(tmp)
	{
		if (!tmp->target_node)
			printf("value : %d, cost : %d\n", tmp->value, tmp->cost);
		else
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

void	ft_clear_target(t_stack **stack)
{
	t_stack	*tmp;
	tmp = *stack;

	while (tmp)
	{
		tmp->target_node = NULL;
		tmp = tmp->next;
	}
}
void	ft_blind_pushb(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;

	stack_size = ft_stack_size(stack_a);
	ft_push_a(stack_a, stack_b);
	if (stack_size > 4)
		ft_push_a(stack_a, stack_b);
	while (stack_size > 3)
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
		stack_size = ft_stack_size(stack_a);
		ft_clear_target(stack_a);
		ft_clear_target(stack_b);
	}
	printf("stack_a :\n\n");
	ft_print_stack(stack_a);
	printf("stack_b :\n\n");
	ft_print_stack_b(stack_b);
}

t_stack	*ft_low(t_stack **stack_a)
{
	t_stack *tmp;
	t_stack *node_next;
	t_stack	*low;
	
	tmp = *stack_a;
	low = tmp;
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

void	ft_set_target_high(t_stack **node, t_stack *stack)
{
	t_stack	*high;

	high = ft_high(&stack);
	(*node)->target_node = high;
}

int	ft_conditions_target_node(t_stack **node, t_stack **stack_b, int bigger_closer)
{
	if ((*node)->value < (*stack_b)->value)
		return (bigger_closer);
	if (bigger_closer < (*stack_b)->value)
	{	
		(*node)->target_node = (*stack_b);
		bigger_closer = (*stack_b)->value;
	}
	return (bigger_closer);
}

void	ft_target_node(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;
	t_stack	*comp;
	int	bigger_closer;

	node = *stack_a;
	comp = *stack_b;
	while (node)
	{
		bigger_closer = -2147483648;
		while (comp)
		{
			bigger_closer = ft_conditions_target_node(&node, &comp, bigger_closer);
			comp = comp->next;
		}
		if (!node->target_node)
			ft_set_target_high(&node, *stack_b);
		comp = *stack_b;
		node = node->next;
	}
}

