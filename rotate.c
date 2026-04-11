/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 16:22:36 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/11 23:28:18 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!(*stack)->next)
		return ;
	last = *stack;
	before_last = *stack;
	while (before_last->next->next != NULL)
	{
		before_last = before_last->next;
	}
	last = before_last->next;
	before_last->next = *stack;
	last->next = (*stack)->next;
	(*stack)->next = NULL;
	*stack = last;
}	
