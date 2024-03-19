/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 12:30:45 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/06 12:23:07 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_date(time_t date)
{
	char	*str1;
	char	*str2;
	time_t	actualtime;

	actualtime = time(0);
	str1 = ctime(&date);
	if ((actualtime - 15778463) > date || actualtime < date)
	{
		str2 = ft_strnew(6);
		str2 = ft_strsub(str1, 20, 4);
		str1 = ft_strsub(str1, 4, 6);
		str1 = ft_strjoin(str1, "  ");
		str1 = ft_strjoin(str1, str2);
		free(str2);
	}
	else
		str1 = ft_strsub(str1, 4, 12);
	str1[12] = '\0';
	ft_putstr(str1);
	ft_putchar(' ');
	free(str1);
}
