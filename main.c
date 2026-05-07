/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:24:56 by mduhoux           #+#    #+#             */
/*   Updated: 2026/05/03 20:48:36 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_begin(int ac, t_stack **stack_a, t_stack **stack_b, char ***str)
{
	if (ft_isvalid(ac, stack_a, *str))
	{
		if (ft_compare(stack_a))
		{
			if (ft_check_is_in_order(stack_a))
			{
				if (ac == 3)
					ft_swap_a(stack_a);
				else if (ac == 4)
					ft_trio(stack_a);
				else
					ft_blind_pushb(stack_a, stack_b);
			}
		}
		else
			write(1, "Error\n", 6);
		ft_clear(stack_a);
		ft_clear(stack_b);
	}
}

int	main(int ac, char **ag)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**str;

	str = ag;
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_begin(ac, &stack_a, &stack_b, &str);
	return (0);
}
