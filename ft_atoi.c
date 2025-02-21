/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstevens <tstevens@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:41:40 by tstevens          #+#    #+#             */
/*   Updated: 2024/11/12 10:57:06 by tstevens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	define_nbr(const char *str, int i, int sign)
{
	long long	nbr;

	nbr = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		if (sign == -1 && sign * nbr < (LLONG_MIN + (str[i] - '0')) / 10)
			return (0);
		if (sign == 1 && nbr > (LLONG_MAX - (str[i] - '0')) / 10)
			return (-1);
		nbr = 10 * nbr + (str[i] - '0');
		i++;
	}
	if (sign * nbr < INT_MIN || sign * nbr > INT_MAX)
		return (sign * (nbr + LLONG_MIN));
	return ((int)(sign * nbr));
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	return (define_nbr(str, i, sign));
}
