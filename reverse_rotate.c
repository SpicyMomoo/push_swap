/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 13:11:54 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/18 10:27:14 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_stack **stack)
{
	t_stack	*last;
	t_stack	*before_last;

	last = *stack;
	before_last = *stack;
	if (!(*stack)->next || !*stack)
		return ;
	while (last->next != NULL)
	{
		last = last->next;
	}
	while (before_last->next->next != NULL)
	{
		before_last = before_last->next;
	}
	before_last ->next = NULL;
	last->next = *stack;
	*stack = last;
	write(1, "rra\n", 4);
}

void	ft_reverse_rotate_b(t_stack **stack)
{
	t_stack	*last;
	t_stack	*before_last;

	last = *stack;
	before_last = *stack;
	if (!(*stack)->next || !*stack)
		return ;
	while (last->next != NULL)
	{
		last = last->next;
	}
	while (before_last->next->next != NULL)
	{
		before_last = before_last->next;
	}
	before_last ->next = NULL;
	last->next = *stack;
	*stack = last;
	write(1, "rrb\n", 4);
}
