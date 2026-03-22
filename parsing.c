/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 16:38:39 by mduhoux           #+#    #+#             */
/*   Updated: 2026/03/22 17:32:50 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isvalid(int ac,char **ag)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (ag[i][j])
		{
			if (ag[i][j] == '+' || ag[i][j] == '-')
				j++; 
			if (ag[i][j] < '0' ||  ag[i][j] > '9')
			{
				write(1, "Error\n", 6);
				return (0);
			}
 			j++;
		}
		i++;	
	}
	write(1, "OK\n", 3);
	return (1);
}

int	ft_convert_args(int ac, char **ag)
{
	int	i;
	int	j;
	t_list	*convert;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (ag[i][j])
		{
			j++;
		}
		convert = create_node(ft_atoi(ag[i]));
		i++;
	}	
	write(1, "OK\n", 3);
	return (1);
}
int	main(int ac, char **ag)
{
	if (ac < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_isvalid(ac, ag))
		ft_convert_args(ac, ag);
	return (0);
}
