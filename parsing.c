/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:11:01 by mduhoux           #+#    #+#             */
/*   Updated: 2026/03/29 20:47:23 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int ac,char **ag)
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

int	ft_compare(t_list **stack)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		
		j = i + 1;
		while (j < ac)
		{
			if (ag[i] == ag[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}	
	write(1, "OK - ft_compare\n", 16);
	return (1);
}

t_list	*ft_convert_args(int ac, char **ag, t_list **stack)
{
	int	i;
	int	j;
	t_list	*next_node;

	i = 2;
	*stack = ft_create_node(ft_atoi(ag[1]));
	while (i < ac)
	{
		j = 0;
		while (ag[i][j])
		{
			j++;
		}
		next_node = ft_create_node(ft_atoi(ag[i]));
		ft_add_list(stack, next_node);	
		i++;
	}
	write(1, "OK - les arguments sont convertis\n", 34);
	return (*stack);
}
int	ft_isvalid(int ac, char **ag, t_list **stack)
{
	if (ft_isdigit(ac, ag))
		ft_convert_args(ac, ag, stack);
}
int	main(int ac, char **ag)
{
	t_list	*stack = NULL;
	if (ac < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_isvalid(ac, ag, &stack))
		(ft_compare_args(ac, ag, stack));
	else 
		write(1, "Error\n", 6);
	return (0);
}
