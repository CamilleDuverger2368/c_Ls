/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:00:34 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/10 20:54:31 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_color(mode_t mode)
{
	S_ISBLK(mode) ? ft_putstr(C_RED) : NULL;
	S_ISCHR(mode) ? ft_putstr(C_BLUE) : NULL;
	S_ISDIR(mode) ? ft_putstr(C_CYAN) : NULL;
	S_ISFIFO(mode) ? ft_putstr(C_BROWN) : NULL;
	S_ISREG(mode) ? ft_putstr(C_NONE) : NULL;
	S_ISLNK(mode) ? ft_putstr(C_GREEN) : NULL;
	S_ISSOCK(mode) ? ft_putstr(C_MAGENTA) : NULL;
}

void	display_date_and_name(t_elem *cur, t_size size)
{
	char	buf[256];
	int		len;

	if (S_ISCHR(cur->st_mode) || S_ISBLK(cur->st_mode))
		print_majmin(cur, size);
	else
		print_int(cur->st_size, size.size);
	display_date(cur->date);
	ft_color(cur->st_mode);
	if (!S_ISLNK(cur->st_mode))
		ft_putendl(cur->name);
	else
	{
		ft_putstr(cur->name);
		ft_putstr(" -> ");
		len = readlink(cur->path, buf, sizeof(buf));
		buf[len] = '\0';
		ft_putendl(buf);
	}
	ft_putstr(C_NONE);
}

void	ls_simple(t_opt arg, t_elem *files)
{
	t_elem	*cur;

	cur = files;
	while (cur)
	{
		if (!(arg.a == 0 && cur->name[0] == '.'))
		{
			ft_color(cur->st_mode);
			ft_putendl(cur->name);
			ft_putstr(C_NONE);
		}
		cur = cur->next;
	}
}

void	ls_long_file(t_opt arg, t_elem *cur, t_size size)
{
	char	*tmp;

	print_first(cur, size);
	if (arg.g == 0)
	{
		if (getpwuid(cur->st_uid))
			print_str(getpwuid(cur->st_uid)->pw_name, size.userspace);
		else
		{
			if (!(tmp = ft_itoa(cur->st_uid)))
				return ;
			print_str(tmp, size.userspace);
			free(tmp);
		}
	}
	if (getgrgid(cur->st_gid))
		print_str(getgrgid(cur->st_gid)->gr_name, size.groupspace);
	else
	{
		if (!(tmp = ft_itoa(cur->st_gid)))
			return ;
		print_str(tmp, size.groupspace);
		free(tmp);
	}
	display_date_and_name(cur, size);
}

void	ls_long(t_opt arg, t_elem *files, int fileordir)
{
	t_elem	*cur;
	t_size	size;

	cur = files;
	size = get_size(arg, files);
	if (fileordir)
	{
		ft_putstr("total ");
		ft_putnbr(size.total);
		ft_putchar('\n');
	}
	while (cur)
	{
		if (!(arg.a == 0 && cur->name[0] == '.'))
			ls_long_file(arg, cur, size);
		cur = cur->next;
	}
}
