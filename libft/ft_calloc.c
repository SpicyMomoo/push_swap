/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:50:41 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 17:01:11 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	totalsize;	

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	int *c;
	c = ft_calloc(5, sizeof(int));
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", c[i]);
		i++;
	}
*/
