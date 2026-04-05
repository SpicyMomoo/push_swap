/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:44:10 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/18 16:29:58 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while ((size_t)i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char s[] = "Ajit aime les momos";
	char s1[] = "Ajit aime les momos";
	ft_bzero(s, 8);
	printf("%s\n", s); 	
	bzero(s1, 8);
	printf("%s\n", s1); 	
}*/
