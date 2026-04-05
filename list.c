/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 11:54:58 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/05 15:06:11 by mduhoux          ###   ########.fr       */
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

/*int	main(int ac, char **ag)
{
	if (ac < 2)
		return (0);
	t_stack *begin;
	t_stack *node1;
	t_stack *node2;
	
	begin = create_node(ft_atoi(ag[1]));
	printf("%d\n", begin->value);
	node1 = create_node(ft_atoi(ag[2]));
	printf("%d\n", node1->value);
	node2 = create_node(ft_atoi(ag[3]));
	printf("%d\n", node2->value);
	add_list(&begin, node1);
	add_list(&begin, node2);
	while (begin != NULL)
	{
		printf("%p\n", begin);
		printf("%p\n", begin->next);
		begin = begin->next;
	}
	printf("-----------------------\n");
	clear(&begin);
	printf("%p", begin);
}*/
