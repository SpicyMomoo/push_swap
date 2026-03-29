/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:11:01 by mduhoux           #+#    #+#             */
/*   Updated: 2026/03/28 16:27:55 by mduhoux          ###   ########.fr       */
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
	write(1, "OK - ft_isvalid\n", 16);
	return (1);
}

int	ft_convert_args(int ac, char **ag, t_list *stack)
{
	int	i;
	int	j;
	t_list	*convert;
	t_list	*next_node;

	i = 2;
	convert = ft_create_node(ft_atoi(ag[1]));
	while (i < ac)
	{
		j = 0;
		while (ag[i][j])
		{
			j++;
		}
		next_node = ft_create_node(ft_atoi(ag[i]));
		ft_add_list(&convert, next_node);	
		i++;
	}
	write(1, "OK - les arguments sont convertis\n", 34);
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
		ft_convert_args(ac, ag, t_list stack);
	if (ft_compare_args(stack));
		write(1, "Error\n", 6);
	return (0);
}
