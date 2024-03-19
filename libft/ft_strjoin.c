/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:23:38 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/10 09:06:54 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (s1 && s2)
	{
		i = ft_strlen(s1);
		j = ft_strlen(s2);
		if (!(str = ft_memalloc((i + j) * sizeof(str))))
			return (NULL);
		j = 0;
		str = ft_strcpy(str, s1);
		str = ft_strcat(str, s2);
		return (str);
	}
	return (NULL);
}
