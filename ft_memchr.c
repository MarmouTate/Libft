/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstevens <tstevens@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:45:18 by tstevens          #+#    #+#             */
/*   Updated: 2024/11/15 17:54:17 by tstevens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	const unsigned char	*str;

	ch = c;
	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
