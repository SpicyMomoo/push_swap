/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:13:53 by mduhoux           #+#    #+#             */
/*   Updated: 2026/03/28 16:23:03 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_compare_args(t_list *stack)
{
	while (stack->next != NULL)
	{
		while (stack != NULL)
		{
			if (stack->value == stack->next->value)
				return (1);
			else 
				stack->next = stack->next->next;
		}
		stack = stack->next;
	}
	return (0);
}
