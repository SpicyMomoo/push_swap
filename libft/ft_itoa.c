/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:53:35 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 21:06:53 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_str(char *str, int n, size_t i)
{
	size_t	j;
	long	ntemp;

	ntemp = n;
	if (n < 0)
	{
		str[0] = '-';
		ntemp = -ntemp;
	}
	j = i - 1;
	str[i] = '\0';
	while (ntemp != 0)
	{
		str[j--] = (ntemp % 10) + '0';
		ntemp = ntemp / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	ntemp;
	size_t	i;

	if (n == 0)
		return (ft_strdup("0"));
	ntemp = n;
	i = 0;
	if (ntemp < 0)
	{
		ntemp = -ntemp;
		i++;
	}
	while (ntemp != 0)
	{
		ntemp = ntemp / 10;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_fill_str(str, n, i);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = ft_itoa(-123456);
	printf("%s", str);	
}*/
