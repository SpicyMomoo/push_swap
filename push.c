/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 11:43:24 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/03 20:17:49 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*first_b;

	if (!*stack_a)
		return ;
	first = *stack_a;
	first_b = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_b == NULL)
	{
		*stack_b = first;
		(*stack_b)->next = NULL;
	}
	else
	{
		first_b->next = *stack_b;
		*stack_b = first_b;
	}
	write(1, "pa\n", 3);
}

void	ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*first_b;

	if (!*stack_a)
		return ;
	first = *stack_a;
	first_b = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_b == NULL)
	{
		*stack_b = first;
		(*stack_b)->next = NULL;
	}
	else
	{
		first_b->next = *stack_b;
		*stack_b = first_b;
	}
	write(1, "pb\n", 3);
}
