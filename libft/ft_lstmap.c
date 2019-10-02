/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcotter- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 14:32:38 by rcotter-          #+#    #+#             */
/*   Updated: 2018/12/13 10:28:45 by rcotter-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_add(t_list *list, t_list *tmp)
{
	list = tmp;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	return (NULL);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*tmp;
	t_list	*prev;

	if (!f || !lst)
		return (NULL);
	list = f(lst);
	tmp = list;
	prev = list;
	list = list->next;
	lst = lst->next;
	while (lst)
	{
		if (!(list = f(lst)))
			return (ft_add(list, tmp));
		prev->next = list;
		lst = lst->next;
		prev = list;
	}
	list = tmp;
	return (list);
}
