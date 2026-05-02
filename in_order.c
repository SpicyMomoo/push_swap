/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:10:53 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/02 22:51:42 by mduhoux          ###   ########.fr       */
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
	ft_trio(stack_a);
	printf("stack_a :\n\n");
	ft_print_stack(stack_a);
	printf("stack_b :\n\n");
	ft_print_stack_b(stack_b);
}
