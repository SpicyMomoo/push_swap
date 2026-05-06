/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:10:53 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/03 20:45:36 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int	p_or_not;

	p_or_not = 1;
	stack_size = ft_stack_size(stack_a);
	ft_push_a(stack_a, stack_b);
	if (stack_size > 4)
		ft_push_a(stack_a, stack_b);
	if (stack_size == 4 || stack_size == 5)
		p_or_not = 0;
	while (stack_size > 3)
	{
		ft_find_cost(stack_a);
		ft_find_cost(stack_b);
		ft_target_node_a(stack_a, stack_b);
		ft_final_cost(stack_a);
//		printf("stack_a :\n\n");
//		ft_print_stack(stack_a);
//		printf("stack_b :\n\n");
//		ft_print_stack_b(stack_b);
		ft_stack_in_order_a(stack_a, stack_b, p_or_not);
		stack_size = ft_stack_size(stack_a);
		ft_clear_target(stack_a);
		ft_clear_target(stack_b);
	}
//	printf("stack_a :\n\n");
//	ft_print_stack(stack_a);
//	printf("stack_b :\n\n");
//	ft_print_stack_b(stack_b);
	ft_final_push(stack_a, stack_b);
}
