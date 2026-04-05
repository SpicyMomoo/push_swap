/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:58:03 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/12 17:28:04 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens;
	size_t	i;
	size_t	j;
	char	*s;

	lens = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(sizeof (char) * (lens + 1));
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		s[j++] = s1[i++];
	i = 0;
	while (s2[i])
		s[j++] = s2[i++];
	s[j] = '\0';
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "Les cookies ";
	char	s2[] = "au pistache";
	printf("%s", ft_strjoin(s1, s2));
}*/
