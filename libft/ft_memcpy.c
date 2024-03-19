/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:53:55 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/07 09:35:56 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
	return (dest);
}
