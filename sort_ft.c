/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 12:28:59 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/10 20:58:57 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	cmp_alpha(t_elem *elem1, t_elem *elem2)
{
	return (ft_strcmp(elem1->name, elem2->name));
}

int	cmp_rev_alpha(t_elem *l, t_elem *r)
{
	return (ft_strcmp(r->name, l->name));
}

int	cmp_time(t_elem *elem1, t_elem *elem2)
{
	return (elem1->date < elem2->date);
}

int	cmp_rev_time(t_elem *l, t_elem *r)
{
	return (l->date > r->date);
}

int	one_of(char c, char *str)
{
	int	i;

	if (str == NULL || c == '\0')
		return (0);
	i = -1;
	while (str[++i])
		if (c == str[i])
			return (1);
	return (0);
}
