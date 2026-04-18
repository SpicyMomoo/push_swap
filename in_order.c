/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:10:53 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/18 21:09:08 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_size(t_stack **stack_a)
{
	int	i;
	t_stack	*tmp;

	tmp = *stack_a;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}	

void	ft_blind_pushb(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;

	stack_size = ft_stack_size(stack_a);
	ft_push_a(stack_a, stack_b);
	if (stack_size > 4)
		ft_push_a(stack_a, stack_b);
}

void	find_target_node(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*next_node;
	t_stack	*node;
	*stack_b = NULL;

	next_node = (*stack_a)->next;
	node = (*stack_a);
	if (!stack_b)
		return ;

//	if ((*stack_a)->value < (*stack_b)->value && node->value < (*stack_b)->value && node->next->value < (*stack_b)->value)
//		ft_add_list(stack_a, *stack_b);
}


