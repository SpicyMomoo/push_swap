/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:38:08 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 18:05:00 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	c = (unsigned char) c;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if ((unsigned char)s[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{	
	char *ptr;
	char s[] = "Bonjour tout le monde";
	ptr = ft_strrchr(s, 'u');
	printf("%s", ptr);
}*/
