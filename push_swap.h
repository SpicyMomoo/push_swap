/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 17:22:31 by mduhoux           #+#    #+#             */
/*   Updated: 2026/04/25 22:10:14 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				cost;
	struct s_stack	*target_node;
	struct s_stack	*next;
}	t_stack;

t_stack	*ft_create_node(int value);
void	*ft_add_list(t_stack **begin, t_stack *new_last_node);
void	*ft_clear(t_stack **lst);
t_stack	*ft_convert_args(int ac, char **ag, t_stack **stack);
int		ft_compare(t_stack **stack);
int		ft_check_digit(char **ag);
int		ft_isnb(int ac, char **ag);
int		ft_check_is_in_order(t_stack **stack);
int		ft_isvalid(int ac, t_stack **stack, char **str);
void	ft_swap_a(t_stack **stack);
void	ft_swap_b(t_stack **stack);
void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_a(t_stack **stack);
void	ft_rotate_b(t_stack **stack);
void	ft_reverse_rotate_a(t_stack **stack);
void	ft_reverse_rotate_b(t_stack **stack);
void	ft_trio(t_stack **stack_a);
void	ft_blind_pushb(t_stack **stack_a, t_stack **stack_b);
int	ft_stack_size(t_stack **stack_a);
void	ft_find_cost(t_stack **stack_a);
void	ft_target_node(t_stack **stack_a, t_stack **stack_b);
void	ft_conditions_target_node(t_stack **node, t_stack **comp, int rest_tmp);
void	ft_final_cost(t_stack **stack_a);
void	ft_push_right_number(t_stack **stack_a);
void	ft_stack_in_order(t_stack **stack_a, t_stack **stack_b);
#endif
