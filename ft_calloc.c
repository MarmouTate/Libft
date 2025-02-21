/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstevens <tstevens@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:09:30 by tstevens          #+#    #+#             */
/*   Updated: 2024/11/05 13:08:56 by tstevens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memalloc(size_t size)
{
	void	*new;
	size_t	i;

	new = (void *) malloc(size);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(unsigned char *)(new + i) = 0;
		i++;
	}
	return (new);
}

void	*ft_calloc(size_t count, size_t size)
{
	if (size != 0 && count > ((size_t) -1 / size))
		return (NULL);
	return (ft_memalloc(count * size));
}
