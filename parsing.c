/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:05:30 by mduhoux           #+#    #+#             */
/*   Updated: 2026/02/24 17:24:10 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **ag)
{
	int	i;
	int	j;

	i = 0;
	if (ac < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}	
	while (i < ac)
	{
		j = 0;
		while (*ag[j])
		{
			if (*ag[j] >= '0' &&  *ag[j] <= '9')
			{
				write(1, "Error\n", 6);
				return (1);
			}
			else
				write(1, "OK", 1);
			j++;
		}
		i++;
	}	
}
