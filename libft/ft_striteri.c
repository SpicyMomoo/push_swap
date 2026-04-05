/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:13:13 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 21:14:49 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_add_ascii(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c + 8;
	return;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "cerises";
	ft_striteri(s, ft_add_ascii);
	printf("%s", s);
}*/
