/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 16:22:36 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/18 10:24:26 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second;

	second = *stack;
	last = *stack;
	if (!(*stack)->next || !*stack)
		return ;
	second = second->next;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = *stack;
	(*stack)->next = NULL;
	*stack = second;
	write(1, "ra\n", 3);
}

void	ft_rotate_b(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second;

	second = *stack;
	last = *stack;
	if (!(*stack)->next || !*stack)
		return ;
	second = second->next;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = *stack;
	(*stack)->next = NULL;
	*stack = second;
	write(1, "rb\n", 3);
}
