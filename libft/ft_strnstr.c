/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:58:00 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 17:50:50 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	char	*s1;
	char	*s2;

	i = 0;
	j = 0;
	s1 = (char *)big;
	s2 = (char *)little;
	if (!*s2)
		return (s1);
	while (s1[i] && ((size_t)i < len))
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j] && (size_t)i + (size_t)j < len)
			j++;
		if (s2[j] == '\0')
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	*big = "Les pates sont bonnes";
	char	*little = "";
	printf("%s\n", strnstr(big, little, 8));
	char	*big1 = "Les pates sont bonnes";
	char	*little1 = "";
	printf("%s", ft_strnstr(big1, little1, 8));
}*/
