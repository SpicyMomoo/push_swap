/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:03:30 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/05 14:43:10 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word);
}

void	*free_tab(char **tab, size_t j)
{
	size_t	k;

	k = 0;
	while (k < j)
	{
		free(tab[k]);
		k++;
	}
	free(tab);
	return (NULL);
}

static char	**fill_str(char **m, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			m[j] = ft_substr(s, start, i - start);
			if (!m[j])
				return (free_tab(m, j));
			j++;
		}
	}
	m[j] = NULL;
	return (m);
}

char	**ft_split(char const *s, char c)
{
	char	**m;

	if (!s)
		return (NULL);
	m = malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (!m)
		return (NULL);
	return (fill_str(m, s, c));
}
