/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:39:51 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 17:03:54 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	while ((size_t)i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[] = "Morgane aime les fraises";
//	char src[] = "Ajit";
	memcpy(dest+2, dest, 3);
	printf("%s\n", dest);
	char dest1[] = "Morgane aime les fraises";
//	char src1[] = "Ajit";
	ft_memcpy(dest1+2, dest1, 3);
	printf("%s\n", dest1);
}*/
