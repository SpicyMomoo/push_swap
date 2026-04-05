/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:08:23 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 21:12:58 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	ft_even_uppercase(unsigned int i, char c)
{
	if (i % 2 != 0)
		return (ft_toupper(c));
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			lens;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	lens = ft_strlen(s);
	str = malloc(sizeof(char) * (lens + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "fraises";
	char	*str = ft_strmapi(s1, ft_even_uppercase);
	printf("%s\n", str);
}*/
