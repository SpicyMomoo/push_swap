/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 22:45:26 by mduhoux           #+#    #+#             */
/*   Updated: 2026/02/19 16:20:12 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	while(tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}

int    main(void)
{
    t_list    *lst;
    t_list    *new;
    t_list    *tree;
    t_list    *var;
    t_list    *tmp;
    int    i;
    i = 0;
    lst = malloc(sizeof(t_list));
    lst->next = NULL;
    new = malloc(sizeof(t_list));
    new->next = NULL;
    tree = malloc(sizeof(t_list));
    tree->next = NULL;
    var = malloc(sizeof(t_list));
    var->next = NULL;
    ft_lstadd_back(&lst, new);
    ft_lstadd_back(&lst, tree);
    ft_lstadd_back(&lst, var);
    lst->i = 1;
    new->i = 2;
    tmp = lst;
}
