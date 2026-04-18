/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:23:44 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/18 10:46:49 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_digit(char **ag)
{
	int	j;

	if (!*ag[1])
		return (0);
	j = 0;
	while (ag[1][j])
	{
		if (ag[1][j] < '0' || ag[1][j] > '9')
		{
			if (ag[1][j] != ' ')
			{
				if (ag[1][j] != '-')
				{
					return (0);
				}
				if (ag[1][j] == '-')
				{
					if (j != 0 && ag[1][j -1] != ' ')
						return (0);
				}
			}
		}
		j++;
	}
	return (1);
}

int	ft_isnb(int ac, char **ag)
{
	int	i;
	int	j;

	i = 1;
	if (!*ag[1])
		return (0);
	while (i < ac)
	{
		j = 0;
		while (ag[i][j])
		{
			if (ag[i][j] < '0' || ag[i][j] > '9')
			{
				if ((ag[i][j] == '-' && j != 0)
					|| ag[i][j] != '-')
				{
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	return (1);
}
