/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:56:55 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/10 21:21:54 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_elem	*free_all_elem(t_elem *lst)
{
	t_elem	*cur;

	while (lst)
	{
		cur = lst;
		lst = lst->next;
		free(cur->name);
		free(cur->path);
		free(cur);
		cur = NULL;
	}
	lst = NULL;
	return (lst);
}

void	free_all_lst(t_list *lst)
{
	t_list	*cur;

	while (lst)
	{
		cur = lst;
		lst = lst->next;
		free(cur->content);
		free(cur);
		cur = NULL;
	}
	lst = NULL;
}

void	free_all(t_list *path, t_list *file, t_list *directory)
{
	free_all_lst(path);
	free_all_lst(file);
	free_all_lst(directory);
}

void	do_ls_dir3(t_elem *dirlist, int first, int multidir)
{
	char	*tmp;

	first == 1 ? ft_putchar('\n') : NULL;
	if (!(tmp = ft_strjoin(dirlist->name, ":")))
		return ;
	multidir ? ft_putendl(tmp) : NULL;
	free(tmp);
}
