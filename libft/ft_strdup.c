/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:54:49 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 17:07:45 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*s1;

	i = ft_strlen(s);
	s1 = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strdup("J'aime les cerises"));
	printf("%s", strdup("J'aime les cerises"));
}*/
