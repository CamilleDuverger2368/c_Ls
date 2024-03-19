/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:31:11 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/10 08:52:33 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	size_t	i;

	i = -1;
	if (!(mem = malloc(sizeof(size_t) * size)))
		return (NULL);
	if (!mem)
		return (NULL);
	while (++i < size)
		*((unsigned char *)mem + i) = '\0';
	return (mem);
}
