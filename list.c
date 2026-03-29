/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 11:54:58 by mduhoux           #+#    #+#             */
/*   Updated: 2026/03/28 16:06:55 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_create_node(int value)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

void	*ft_add_list(t_list **begin, t_list *new_last_node)
{
	t_list	*tmp;

	tmp = *begin;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_last_node;
	return (0);
}

void	*ft_clear(t_list **lst)
{
	t_list	*tmp;

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
	t_list *begin;
	t_list *node1;
	t_list *node2;
	
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
