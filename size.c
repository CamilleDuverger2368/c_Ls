/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 15:33:11 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/10 20:57:19 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_size_errorhandling_2(t_size *size, t_elem *cur)
{
	char	*tmp;

	if (getgrgid(cur->st_gid))
		size->groupspace = (int)ft_strlen(getgrgid(cur->st_gid)->gr_name) \
			> size->groupspace ? \
			(int)ft_strlen(getgrgid(cur->st_gid)->gr_name) : size->groupspace;
	else
	{
		if (!(tmp = ft_itoa(cur->st_gid)))
			return ;
		size->groupspace = (int)ft_strlen(tmp) \
			> size->groupspace ? (int)ft_strlen(tmp) \
			: size->groupspace;
		free(tmp);
	}
}

void	get_size_errorhandling(t_size *size, t_elem *cur)
{
	char	*tmp;

	if (getpwuid(cur->st_uid))
		size->userspace = (int)ft_strlen(getpwuid(cur->st_uid)->pw_name) \
			> size->userspace ? (int)ft_strlen(getpwuid(cur->st_uid)->pw_name) \
			: size->userspace;
	else
	{
		if (!(tmp = ft_itoa(cur->st_uid)))
			return ;
		size->userspace = (int)ft_strlen(tmp) \
			> size->userspace ? (int)ft_strlen(tmp) \
			: size->userspace;
		free(tmp);
	}
}

void	get_size_quick(t_size *size, t_elem *cur)
{
	char	*tmp;

	if (!(tmp = ft_itoa(cur->st_nlink)))
		return ;
	size->linkspace = (int)ft_strlen(tmp) > \
		size->linkspace ? (int)ft_strlen(tmp) \
		: size->linkspace;
	free(tmp);
	if (!(tmp = ft_itoa(major(cur->st_rdev))))
		return ;
	size->maj = (int)ft_strlen(tmp) > size->maj \
		? (int)ft_strlen(tmp) : size->maj;
	free(tmp);
	if (!(tmp = ft_itoa(minor(cur->st_rdev))))
		return ;
	size->min = (int)ft_strlen(tmp) > size->min ? \
		(int)ft_strlen(tmp) : size->min;
	free(tmp);
	if (!(tmp = ft_itoa(cur->st_size)))
		return ;
	size->size = (int)ft_strlen(tmp) > size->size ? \
		(int)ft_strlen(tmp) : size->size;
	free(tmp);
	size->total += cur->st_blocks;
}

t_size	get_size(t_opt arg, t_elem *files)
{
	t_elem	*cur;
	t_size	size;

	size = (t_size){0, 0, 0, 0, 0, 0, 0};
	cur = files;
	while (cur)
	{
		if (!(arg.a == 0 && cur->name[0] == '.'))
		{
			get_size_quick(&size, cur);
			get_size_errorhandling(&size, cur);
		}
		cur = cur->next;
	}
	return (size);
}
