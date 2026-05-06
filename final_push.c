/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:46:04 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/03 21:22:37 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
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
	while (tmp)
	{
		printf("value : %d, cost : %d\n", tmp->value, tmp->cost);
		tmp = tmp->next;
	}
}

void	ft_final_push(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;

	ft_trio(stack_a);
	stack_size = ft_stack_size(stack_b);
	while (stack_size > 0)
	{
		ft_target_node_b(stack_a, stack_b);
		ft_find_cost(stack_a);
//		printf("stack_a final push :\n\n");
//		ft_print_stack_b(stack_a);
//		printf("stack_b final push:\n\n");
//		ft_print_stack(stack_b);
		ft_stack_in_order_b(stack_a, stack_b);
		ft_clear_target(stack_a);
		ft_clear_target(stack_b);
		stack_size = ft_stack_size(stack_b);
	}
//	printf("stack_a final push :\n\n");
//	ft_print_stack_b(stack_a);
//	printf("stack_b final push :\n\n");
//	ft_print_stack_b(stack_b);
	ft_min_to_top(stack_a);
}
