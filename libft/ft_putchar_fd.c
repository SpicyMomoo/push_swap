/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduhoux <mduhoux@student.42belgium.be      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:15:03 by mduhoux           #+#    #+#             */
/*   Updated: 2025/11/11 21:16:37 by mduhoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('C', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('u', 1);
	ft_putchar_fd('c', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('u', 1);
}*/
