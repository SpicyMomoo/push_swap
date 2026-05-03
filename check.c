/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:21:27 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/03 20:47:56 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_is_in_order(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*comp;

	tmp = *stack_a;
	comp = tmp->next;
	while (comp)
	{
		if (tmp->value > comp->value)
			return (1);
		tmp = tmp->next;
		comp = comp->next;
	}
	write(1, "OK\n", 3);
	return (0);
}

void	ft_trio(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->next->value > (*stack_a)->next->next->value)
	{
		ft_rotate_a(stack_a);
		ft_swap_a(stack_a);
	}
	else if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->next->value < (*stack_a)->next->next->value
		&& (*stack_a)->value < (*stack_a)->next->next->value)
		ft_swap_a(stack_a);
	else if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->next->value < (*stack_a)->next->next->value)
		ft_rotate_a(stack_a);
	else if ((*stack_a)->value < (*stack_a)->next->value
		&& (*stack_a)->next->value > (*stack_a)->next->next->value
		&& (*stack_a)->value < (*stack_a)->next->next->value)
	{
		ft_swap_a(stack_a);
		ft_rotate_a(stack_a);
	}
	else if ((*stack_a)->value < (*stack_a)->next->value
		&& (*stack_a)->next->value > (*stack_a)->next->next->value)
	{
		ft_reverse_rotate_a(stack_a);
	}
}
