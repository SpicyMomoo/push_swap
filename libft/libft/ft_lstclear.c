/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:34:16 by mduhoux           #+#    #+#             */
/*   Updated: 2026/02/23 18:30:02 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	if (content)
		free(content);
}
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!*lst)
		return ;
	while ((*lst)->next != NULL)
	{
		del((*lst)->content);
		free(*lst);
		*lst = (*lst)->next;
	}
	lst = NULL;
}

int main()
{
	t_list *lst = malloc(sizeof(t_list));
	lst->next = NULL;
	ft_lstclear(&lst, del);
	free(lst);
	return 0;
}
