/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:08:27 by mduhoux           #+#    #+#             */
/*   Updated: 2026/02/17 20:40:53 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;	
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*lst;
	t_list	*new;

	printf("%p\n", lst);
	printf("%p\n", new);
	lst = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	ft_lstadd_front(&lst, new);
	printf("%p\n", lst);
	printf("%p\n", new);
}
