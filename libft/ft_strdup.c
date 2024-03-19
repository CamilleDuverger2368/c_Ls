/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:36:03 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/10 08:53:15 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char const *src)
{
	char	*c;
	int		len;

	len = -1;
	while (src[++len])
		;
	if (!(c = (char *)malloc(len * sizeof(char) + 1)))
		return (NULL);
	if (c != NULL)
		ft_strcpy(c, src);
	*(c + len) = '\0';
	return (c);
}
