/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:53:49 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/18 16:00:09 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*m;
	size_t	i;
	size_t	k;
	size_t	lens;

	i = 0;
	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (start >= lens)
		return (ft_strdup(""));
	if (start + len > lens)
		len = lens - start;
	m = malloc(sizeof(char) * (len + 1));
	if (!m)
		return (NULL);
	i = start;
	k = 0;
	while (s[i] && k < len)
		m[k++] = s[i++];
	m[k] = '\0';
	return (m);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "il fait beau aujourd'hui";
	printf("%s", ft_substr(s, 9, 1));
}*/
