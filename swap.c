/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:10:22 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/18 10:00:06 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_stack **stack)
{
	t_stack	*tmp;

	if ((*stack)->next == NULL || *stack == NULL)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_stack **stack)
{
	t_stack	*tmp;

	if ((*stack)->next == NULL || *stack == NULL)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
	write(1, "sb\n", 3);
}
