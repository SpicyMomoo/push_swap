/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:24:56 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/12 17:26:53 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (ft_isvalid(ac, &stack_a, str))
	{
		if (ft_compare(&stack_a))
			ft_check_is_in_order(&stack_a);
		else
			write(1, "Error - ft_compare\n", 19);
		//ft_swap(&stack_a);
		//ft_rotate(&stack_a);
		//ft_reverse_rotate(&stack_a);
		ft_push(&stack_a, &stack_b);
		printf("stack A\n");
		while (stack_a != NULL)
		{
			printf("%d\n", stack_a->value);
			stack_a = stack_a->next;
		}
		printf("stack B\n");
		while (stack_b != NULL)
		{
			printf("%d\n", stack_b->value);
			stack_b = stack_b->next;
		}
		ft_clear(&stack_a);
		return (0);
	}
}
