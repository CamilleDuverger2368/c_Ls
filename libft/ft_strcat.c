/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:15:19 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/07 09:46:09 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char const *src)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(dest);
	while ((dest[i] = src[j]))
	{
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
