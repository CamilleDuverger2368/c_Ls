/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduverge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:35:31 by cduverge          #+#    #+#             */
/*   Updated: 2019/06/06 12:27:05 by cduverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*ctnt;

	ctnt = (void *)ft_memalloc(content_size + 1);
	if (!ctnt)
		return (NULL);
	if (content == NULL)
	{
		ctnt = NULL;
		content_size = 0;
	}
	else
		ctnt = ft_memcpy(ctnt, content, content_size);
	list = (t_list *)ft_memalloc(sizeof(t_list));
	if (list != (t_list *)NULL)
	{
		list->content_size = content_size;
		list->next = NULL;
		list->content = ctnt;
	}
	return (list);
}
