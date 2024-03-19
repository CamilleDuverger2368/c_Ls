/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 23:06:38 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/11 09:50:10 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_access(t_elem *elem)
{
	S_ISFIFO(elem->st_mode) ? ft_putchar('p') : 0;
	S_ISCHR(elem->st_mode) ? ft_putchar('c') : 0;
	S_ISDIR(elem->st_mode) ? ft_putchar('d') : 0;
	S_ISBLK(elem->st_mode) ? ft_putchar('b') : 0;
	S_ISREG(elem->st_mode) ? ft_putchar('-') : 0;
	S_ISLNK(elem->st_mode) ? ft_putchar('l') : 0;
	S_ISSOCK(elem->st_mode) ? ft_putchar('s') : 0;
	ft_putchar((elem->st_mode & S_IRUSR) ? 'r' : '-');
	ft_putchar((elem->st_mode & S_IWUSR) ? 'w' : '-');
	ft_putchar((elem->st_mode & S_IXUSR) ? 'x' : '-');
	ft_putchar((elem->st_mode & S_IRGRP) ? 'r' : '-');
	ft_putchar((elem->st_mode & S_IWGRP) ? 'w' : '-');
	ft_putchar((elem->st_mode & S_IXGRP) ? 'x' : '-');
	ft_putchar((elem->st_mode & S_IROTH) ? 'r' : '-');
	ft_putchar((elem->st_mode & S_IWOTH) ? 'w' : '-');
	ft_putchar((elem->st_mode & S_IXOTH) ? 'x' : '-');
	ft_putstr("  ");
}

void	print_int(int nlink, int spacemax)
{
	int		n;
	char	*tmp;

	if (!(tmp = ft_itoa(nlink)))
		return ;
	n = spacemax - ft_strlen(tmp);
	free(tmp);
	while (n-- > 0)
		ft_putchar(' ');
	ft_putnbr(nlink);
	ft_putstr(" ");
}

void	print_str(char *str, int spacemax)
{
	int	n;

	n = spacemax - ft_strlen(str);
	ft_putstr(str);
	while (n-- > 0)
		ft_putchar(' ');
	ft_putstr("  ");
}

void	print_majmin(t_elem *file, t_size size)
{
	int		min;
	int		maj;
	char	*tmp;

	if (!(tmp = ft_itoa(minor(file->st_rdev))))
		return ;
	min = (int)ft_strlen(tmp);
	free(tmp);
	if (!(tmp = ft_itoa(major(file->st_rdev))))
		return ;
	maj = (int)ft_strlen(tmp);
	free(tmp);
	ft_putnbr(major(file->st_rdev));
	while (maj < size.maj--)
		ft_putchar(' ');
	ft_putstr(", ");
	ft_putnbr(minor(file->st_rdev));
	while (min < size.min--)
		ft_putchar(' ');
	ft_putchar(' ');
}

void	print_first(t_elem *cur, t_size size)
{
	print_access(cur);
	print_int(cur->st_nlink, size.linkspace);
}
