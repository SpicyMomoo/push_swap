/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:42:11 by mduhoux           #+#    #+#             */
/*   Updated: 2026/02/23 17:20:50 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;
	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	else
	{
		new_element->content = content;
		new_element->next = NULL;
	}
	return (new_element);
}
