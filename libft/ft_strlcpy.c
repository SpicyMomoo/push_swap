/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:37:13 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 18:03:19 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (((size_t)i < size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char dst[] = "sjklalssl";
	const char src[] = "fieu";
	char dst2[] = "sahhagsjh";
	const char src2[] = "fieu";
	int len = ft_strlcpy(dst, src, 4);
	printf("%d | %s\n", len, dst);
	int len2 = strlcpy(dst2, src2, 4);
	printf("%d | %s\n", len2, dst2);
	return (0);
}*/
