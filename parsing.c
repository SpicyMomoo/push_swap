/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:11:01 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/18 10:19:53 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_compare(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*compare_with;

	if (*stack_a == NULL)
		return (0);
	compare_with = *stack_a;
	while (compare_with->next != NULL)
	{
		tmp = compare_with;
		while (tmp->next != NULL)
		{
			if (compare_with->value == tmp->next->value)
			{
				return (0);
			}
			tmp = tmp->next;
		}
		compare_with = compare_with->next;
	}
	return (1);
}

t_stack	*ft_convert_args(int ac, char **ag, t_stack **stack_a)
{
	int			i;
	int			j;
	t_stack		*next_node;

	i = 2;
	if (!stack_a)
	{
		return (NULL);
	}
	*stack_a = ft_create_node(ft_atoi(ag[1]));
	while (i < ac)
	{
		j = 0;
		while (ag[i][j])
		{
			j++;
		}
		next_node = ft_create_node(ft_atoi(ag[i]));
		ft_add_list(stack_a, next_node);
		i++;
	}
	return (*stack_a);
}

t_stack	*ft_convert_split_args(char **ag, t_stack **stack_a)
{
	int			i;
	int			j;
	t_stack		*next_node;

	i = 1;
	if (!stack_a)
	{
		return (NULL);
	}
	*stack_a = ft_create_node(ft_atoi(ag[0]));
	while (ag[i])
	{
		j = 0;
		while (ag[i][j])
		{
			j++;
		}
		next_node = ft_create_node(ft_atoi(ag[i]));
		ft_add_list(stack_a, next_node);
		i++;
	}
	return (*stack_a);
}

int	ft_isvalid(int ac, t_stack **stack_a, char **str)
{
	if (ac == 2)
	{
		if (ft_check_digit(str))
		{
			str = ft_split(str[1], ' ');
			ft_convert_split_args(str, stack_a);
		}
	}
	if (ac > 2)
	{
		if (ft_isnb(ac, str))
			ft_convert_args(ac, str, stack_a);
	}
	return (1);
}
