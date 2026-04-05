/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:01:41 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/12 19:52:40 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	lentot;
	char	*finalstr;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_strchr(set, s1[j]) != NULL)
		j--;
	lentot = j - i + 1;
	finalstr = malloc(sizeof (char) * lentot + 1);
	if (!finalstr)
		return (NULL);
	k = 0;
	while (i <= j)
		finalstr[k++] = s1[i++];
	finalstr[k] = '\0';
	return (finalstr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "bacsajadsksacb";
	char	set[] = "abc";
	printf("%s", ft_strtrim(s1, set));
}*/
