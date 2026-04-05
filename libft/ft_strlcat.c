/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:08:15 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 17:21:59 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	i = len_dst;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char dst[10] = "La vie ";
	char src[] = "est un calvaire";
	char dst2[10] = "La vie ";
	char src2[] = "est un calvaire";

	printf("%zu\n", strlcat(dst, src, 10));
	printf("%zu", ft_strlcat(dst2, src2, 10));
}*/
