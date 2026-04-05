/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:01:44 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 18:58:45 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	c = (unsigned char)c;
	while (str[i])
	{
		if ((unsigned char) str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int c = 'l';
	char *ptr;
	char s[] = "";
//	ptr = strchr(s, c);
//	printf("%s", ptr);
	ptr = ft_strchr(s, c);
	printf("%s", ptr);
}*/
