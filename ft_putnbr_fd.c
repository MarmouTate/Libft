/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstevens <tstevens@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:55:47 by tstevens          #+#    #+#             */
/*   Updated: 2024/11/15 16:29:19 by tstevens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd >= 0)
	{
		if (n == -2147483648)
		{
			ft_putchar_fd ('-', fd);
			ft_putchar_fd ('2', fd);
			ft_putnbr_fd (147483648, fd);
		}
		else if (n < 0)
		{
			ft_putchar_fd ('-', fd);
			ft_putnbr_fd (-n, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd (n / 10, fd);
			ft_putnbr_fd (n % 10, fd);
		}
		else
			ft_putchar_fd (n + '0', fd);
	}
}
