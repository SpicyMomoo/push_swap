/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 11:54:58 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/26 20:07:53 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_create_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

void	*ft_add_list(t_stack **begin, t_stack *new_last_node)
{
	t_stack	*tmp;

	tmp = *begin;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_last_node;
	return (0);
}

void	*ft_clear(t_stack **lst)
{
	t_stack	*tmp;

	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
	return (0);
}

int	ft_stack_size(t_stack **stack)
{
	int	i;
	t_stack	*tmp;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
