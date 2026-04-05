/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:03:09 by mduhoux           #+#    #+#             */
/*   Updated: 2026/02/23 22:15:28 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str(void *str)
{
	str->content = "Morgane";
}
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!*lst)
		return ;
	if (lst->next == NULL)
	{
		ft_str(lst);
		return (lst->content);
	}
	while(lst->next != NULL)
	{
		ft_str(lst);
		lst = lst->next;
	}
}
