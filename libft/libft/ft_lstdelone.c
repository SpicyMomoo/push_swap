/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:23:20 by mduhoux           #+#    #+#             */
/*   Updated: 2026/02/23 17:19:38 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	printdel(void *content)
{
	 free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

int main(void)
{
	char	*str = malloc(sizeof(char) * 6);
	str = "hello";

	t_list	*node = ft_lstnew(str);
	printf("avant : %s\n", (char *)node->content);

	ft_lstdelone(node, printdel);
	printf("apres : le noeud est supprime\n");

	return (0);
}
